#include <stdio.h>
/**
 * main - check desc
 * @argc: argument
 * @argv: value
 * desc: count value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;
	(void)argv;

	c = 0;
	while (c <= argc)
		c++;

	printf("%d\n", c - 2);
	return (0);
}
