#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;
	printf("Last digit of ");
	printf("%d", n);
	printf(" is ");
	printf("%d", v);
	if (v > 5)
		printf(" and is greater than 5");
	else if (v == 0)
		printf(" and is 0");
	else
		printf(" and is less than 6 and not 0");
	return (0);
}
