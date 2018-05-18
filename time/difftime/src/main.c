#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
	time_t start_t, end_t;

	time(&start_t);
	sleep(5);

	time(&end_t);

	double val = difftime(start_t, end_t);
	double diff_val = difftime(end_t, start_t);

	// Negative (-5)
	printf("val: %f\n", val);

	//Non Negative (5)
	printf("diff_val: %f\n", diff_val);
	return 0;
}
