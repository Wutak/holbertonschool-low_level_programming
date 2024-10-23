#include <unistd.h>
/**
 * print_alphabet_x10 - Entry point
 * Description: alphabet x10
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int v;
	int i;

	v = 'a';
	i = 0;
	while (i < 10)
	{
		while (v <= 'z')
		{
			write(1, &v, 1);
			v++;
		}
		write(1. "\n", 1);
		i++;
	}
}
