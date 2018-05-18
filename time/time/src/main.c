#include <stdio.h>
#include <time.h>

int main()
{
	//NOTE: Both methods work perfectly
	time_t seconds;
	seconds = time(NULL);
	printf("Seconds since January 1, 1970 = %ld\n", seconds);
	printf("Hours since January 1, 1970 = %ld\n", seconds/3600);

	time_t new_seconds;
	time(&new_seconds);
	printf("Seconds since January 1, 1970 = %ld\n", new_seconds);
	printf("Hours since January 1, 1970 = %ld\n", new_seconds/3600);

	return 0;
}
