#include <stdio.h>
/**
 * main - check desc
 * @argc: argument
 * @argv: value
 * desc: print number arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int c;

	c = 0;
	while (c < argc)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
