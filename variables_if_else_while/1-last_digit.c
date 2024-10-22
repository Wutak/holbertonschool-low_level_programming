#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
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
		printf(" and is greater than 5\n");
	else if (v == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
