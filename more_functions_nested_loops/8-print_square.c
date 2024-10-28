#include <unistd.h>
/**
 * print_square - Entry.
 * @size: input.
 * Description: square.
 * Return: Nothing.
 */
void print_square(int size)
{
	int i;
	int v;

	i = 0;
	if (size <= 0)
		write(1, "\n", 1);
	while (i < size)
	{
		v = 0;
		while (v < size)
		{
			write(1, "#", 1);
			v++;
		}
		write(1, "\n", 1);
		i++;
	}
}
