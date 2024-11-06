/**
 * _strspn - check description
 * @s: string
 * @accept: reference bytes container
 * Description: counting bytes
 * Return: Bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int v;
	unsigned int c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		v = 0;
		while (accept[v] != '\0')
		{
			if (accept[v] == s[i])
			{
				c++;
				break;
			}
			else if (accept[i] == '\0')
					return (c - 1);
			v++;
		}
		i++;
	}
	return (c - 1);
}

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
