#include <stdlib.h>
/**
 * *string_nconcat - check desc
 * @s1: string 1
 * @s2: string 2
 * @n: number
 * desc: string concat
 * Return: 1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;

	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		p = s1[i];
		i++;
		p++;
	}
	while (s2[i] < n)
	{
		p = s2[i];
		i++;
		p++;
	}
	return (p);
}
