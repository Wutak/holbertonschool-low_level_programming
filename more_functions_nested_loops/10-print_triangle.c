#include <unistd.h>
#include "10-main.c"
/**
 * print_triangle - Entry
 * @size: input
 * Description: print triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i;
	int v;
	int s;
	int d;

	i = 0;
	v = 0;
	d = 0;
	s = size;
	if (size <= 0)
		write(1, "\n", 1);
	else if (size == 2)
	{
		write(1, " #\n", 3);
		write(1, "##\n", 3);
	}
	else
	{
		while (i < size)
		{
			v = 0;
			d = 0;
			while (v < s - 1)
			{
				write(1, " ", 1);
				v++;
			}
			while (v + d < size)
			{
				write(1, "#", 1);
				d++;
			}
			write(1, "\n", 1);
			i++;
			s--;
		}
	}
}
