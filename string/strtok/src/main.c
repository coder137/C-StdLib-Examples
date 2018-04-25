#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*
    You can use any one of them,
    however: char * data wont work
    */

	//1. NOTE, Can be used
	char data[] = "This,is,a,test,string";

	//2. NOTE, Can be used
	char * d = (char *) malloc(30*sizeof(char));
	strcpy(d, "This,is,a,test,string");

	//3. NOTE, Cannot be used
	const char * const new_data = "This,is,a,test,string";

	printf("%s %d\n", data, sizeof(data));
    printf("%s %d\n", d, sizeof(d));
    printf("%s %d\n", new_data, sizeof(new_data));

    //This is fine
    const char *s = ",";

    char * token = strtok(d, s);
    while(token != NULL)
    {
        printf("Token: %s\n", token);
        token = strtok(NULL, s);
    }

    //We free the malloc allocated string
    free(d);
	return 0;
}
