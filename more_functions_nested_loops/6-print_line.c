#include <unistd.h>
/**
 * print_line - Entry
 * @n: input.
 * Description: ___
 * Return: Nothing.
 */
void print_line(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		write(1, "", 0);
	while (i <= n)
	{
		write(1, "_", 1);
		i++;
	}
	write(1, "\n", 1);
}
