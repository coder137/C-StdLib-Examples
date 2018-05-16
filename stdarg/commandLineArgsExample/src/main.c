#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int sum(int numbersToAdd, ...);

//NOTE: Can be used in tangent with argv (from the command line)
//Hasn't been done here for simplicity
int main(int argc, char ** argv)
{
    int len = argc - 1;

	if(len != 5)
	{
		printf("Please Input 5 numbers\n");
		return  -1;
	}

    printf("argsNum: %d\n\n", argc);
	for(int i=0;i<argc;i++)
    {
        printf("Data: %d == %s\n", i, argv[i]);
    }

	//Just an Example
	int nums = sum(5, atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4]), atoi(argv[5]));
	printf("Nums : %d\n", nums);
	return 0;
}

//NOTE, This is how a VARIADIC function looks like
int sum(int numbersToAdd, ...)
{
	int sum = 0;

	//init the va_list
	va_list arguments;
	va_start(arguments, numbersToAdd);

	for(int i=0;i<numbersToAdd;i++)
	{
		//we get the arguments from the list
		sum += va_arg(arguments, int);
	}
	//we end this va_list
	va_end(arguments);

	return sum;
}
