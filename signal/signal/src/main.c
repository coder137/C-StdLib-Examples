#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void sigint_callback(int);

int main()
{
    signal(SIGINT, sigint_callback);

    printf("Starting while loop\n");
    printf("Press Ctrl+C to exit program\n");
    while(1)
    {
        ;;
        //This does not let the program terminate
    }

    return 0;
}


void sigint_callback(int signum)
{
    printf("Ctrl+C command received\n");
    exit(1);
}
