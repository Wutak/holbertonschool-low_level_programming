#include <unistd.h>
/**
 * print_alphabet_x10 - Entry point
 * Description: alphabet x10
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	int v;

	v = 0;
	while (v < 10)
	{
		write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
		v++;
	}
}
