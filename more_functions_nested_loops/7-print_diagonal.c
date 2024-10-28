#include <unistd.h>
/**
 * print_diagonal - Entry
 * @n: input.
 * Description: diagonal
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int i;
	int v;

	i = 0;
	if (n <= 0)
	{
		write(1, "", 0);
		write(1, "\n", 1);
	}
	else if (n == 1)
	{
		write(1, "\n", 1);
		write(1, "\\", 1);
		write(1, "\n", 1);
	}
	while (i < n)
	{
		v = 0;
		while (v <= i - 1)
		{
			write(1, " ", 1);
			v++;
		}
		write(1, "\\", 1);
		write(1, "\n", 1);
		i++;
	}
}
