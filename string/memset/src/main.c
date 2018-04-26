#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	static char buffer[255];

	strcpy(buffer, "This is a dummy string");
	printf("String: %s\n", buffer);

	//NOTE, Replace the first few characters with #
	memset(buffer, '#', 9*sizeof(char));
	printf("Memset #: %s\n", buffer);

	//NOTE, TO clear the entire buffer, 0 or '\0' (Same thing)
	memset(buffer, 0, 255*sizeof(char));
	printf("Memset 0: %s\n", buffer);

	return 0;
}
