#include <unistd.h>
/**
 * _puts - Entry
 * @str: input
 * Description: str
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str, 1);
		i++;
	}
	write(1, "\n", 1);
}
