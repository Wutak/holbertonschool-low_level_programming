/**
 * _strchr - check description
 * @s: string
 * @c: character
 * Description: string character
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	if (s[i] == c)
		return (s + i);
	else
		return (0);
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
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
