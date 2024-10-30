#include <unistd.h>
/**
 * puts2 - Entry
 * @str: input
 * Description: puts
 * Return: Nothing
 */
void puts2(char *str)
{
	int v;

	v = 0;
	while (str[v] != '\0')
	{
		if (v % 2 == 0)
		{
			write(1, &str[v], 1);
			v++;
		}
		v++;
	}
	write(1, "\n", 1);
}
