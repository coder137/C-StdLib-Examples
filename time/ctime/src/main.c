#include <stdio.h>
#include <time.h>

int main()
{
	time_t seconds;
	time(&seconds);

	//NOTE: This prints the current time in its string representation
	printf("Current Time: %s\n", ctime(&seconds));
	return 0;
}
