#include <unistd.h>
#include "1-main.c"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int v;

	v = 'a';
	while (v <= 'z')
	{
		write(1, &v, 1);
		v++;
	}
	write(1, "\n", 1);
}
