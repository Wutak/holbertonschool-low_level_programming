#include <unistd.h>
#include "1-main.c"
/**
 * main - Entry point
 *
 * Return: Nothing.
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
