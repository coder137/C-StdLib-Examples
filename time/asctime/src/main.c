#include <stdio.h>
#include <time.h>

int main()
{
	struct tm t;

	t.tm_sec = 10;
	t.tm_min = 30; //30
	t.tm_hour = 2; //2
	t.tm_mday = 14;
	t.tm_mon = 5-1; // Index from 0 (January) 4 --> May
	t.tm_year = 18+100; //2018
	t.tm_wday = 1; //Monday

	printf("%s\n", asctime(&t));

	return 0;
}
