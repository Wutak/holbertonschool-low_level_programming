#include <stdlib.h>
/**
 * *_strdup - check desc
 * @str: string
 * desc: strdup
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i;
	unsigned int c;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0';)
		i++;

	p = malloc(i * sizeof(*str) + 1);
	if (a == NULL)
		return (NULL);

	c = 0;
	while (c < i)
	{
		p[c] = str[c];
		c++;
	}
	p[c] = '\0';
	return (p);
}
