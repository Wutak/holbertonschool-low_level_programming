#include "main.h"
#include <stdlib.h>

/**
 * _strlen - strlen
 * @s: pointer
 * Return: v
 */
int _strlen(char *s)
{
	int v = 0;

	while (s[v] != '\0')
		v++;
	return (v);
}

/**
 * *_strdup - strdup
 * @str: pointer
 * Return: p
 */
char *_strdup(char *str)
{
	char *p;
	int size, i;

	if (str == NULL)
		return (NULL);


	size = _strlen(str) + 1;
	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = str[i];

	return (p);
}
