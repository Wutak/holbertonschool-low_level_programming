#include <unistd.h>
/**
 * puts_half
 * @str: input
 * Description: half
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i;
	int m;

	i = 0;
	while (str[i] != '\0')
		i++;
	m = i / 2;
	if (i % 2 == 1)
		m++;
	while (m < i)
	{
		write(1, &str[m], 1);
		m++;
	}
	write(1, "\n", 1);
}
