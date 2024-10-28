#include <unistd.h>
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
	int n;
	int a;

	i = 0;
	n = size;
	a = size;
	if (size <= 0)
		write(1, "\n", 1);
	while(i < size)
	{
		v = 0;
		while(v < n - 1)
		{
			write(1, " ", 1);
			v++;
		}
		while(a - 1 < size)
		{
			write(1, "#", 1);
			a++;
		}
		write(1, "\n", 1);
		i++;
		a--;
	}
}
