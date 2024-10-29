#include <unistd.h>
/**
 * print_rev - Entry
 * @s: input
 * Description: reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = 1;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0 && i != '\0')
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
