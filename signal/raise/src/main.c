#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

//functions used
void sigint_callback(int);

//global variables, we can add other signals here to generate
int GENERATE = SIGINT;

int main()
{
	int status;

	status = (int) signal(GENERATE, sigint_callback);

	if(status == SIG_ERR)
	{
		printf("Unable to set signal handler\n");
		exit(0);
	}


	printf("Going to raise error\n");
	status = raise(GENERATE);

	if(status != 0)
	{
		printf("Unable to raise error\n");
	}

	return 0;
}

void sigint_callback(int signum)
{
	printf("Signal: %d received\n", signum);
	exit(1);
}
