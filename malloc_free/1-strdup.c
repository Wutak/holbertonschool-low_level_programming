#include "main.h"
#include <stdlib.h>

/**
 * _strlen - check desc
 * @s: pointer
 * desc: strlen
 * Return: v
 */
int _strlen(char *s)
{
	int v = 0;

	while (s[v] != '\0'[v++])
	{

	}
	return (v);
}

/**
 * *_strdup - check desc
 * @str: pointer
 * desc: strdup
 * Return: p
 */

char *_strdup(char *str)
{
	char *p;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	p = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		if (p == NULL)
		{
			return (NULL);
	}
		p[i] = str[i];
		i++;
	}
	return (p);
}
