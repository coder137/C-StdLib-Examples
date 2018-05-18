#include <stdio.h>
#include <time.h>

int main()
{
	clock_t start_t, end_t;

	start_t = clock();
	printf("Starting the program now, start_t = %ld\n", start_t);

	printf("Starting a loop\n");
	for(int i=0;i<10000;i++)
	{
		// NOTE: This either gets optimized or runs extremely fast (Hence putting the printf statement)
		// for(int j=0;j<10000;j++)
		// {
		// 	;;
		// }
		printf("%d ", i);
	}
	printf("\n");

	end_t = clock();
	printf("End of the big loop end_t = %ld\nCLOCKS_PER_SEC = %ld\n", end_t, CLOCKS_PER_SEC);

	//NOTE: For some reason assigning the value to a clock_t variable does not work
	//clock_t final_t = (double) (end_t - start_t) / CLOCKS_PER_SEC;

	//NOTE: This works just fine
	double data = (double) (end_t - start_t) / CLOCKS_PER_SEC;
	printf("Total time taken by cpu: %f\n", data);
	printf("Exiting the program\n");
	return 0;
}
