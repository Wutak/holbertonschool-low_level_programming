#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	if (v > 5)
		printf("Last digit of &n is &v and is greater than 5");
	else if (v == 0)
		printf("Last digit of &n is &v and is 0");
	else
		printf("Last digit of &n is &v and is less than 6 and not 0");
	return (0);
}
