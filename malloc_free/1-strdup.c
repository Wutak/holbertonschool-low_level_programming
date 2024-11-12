#include <stdlib.h>
/**
 * _strdup - check desc
 * @str: string
 * desc: malloc
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int c;

	i = 0;
	c = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0';)
		i++;

	p = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	while (c < i)
	{
		p[c] = str[c];
		c++;
	}
	p[c] = '\0';
	return (p);
}
