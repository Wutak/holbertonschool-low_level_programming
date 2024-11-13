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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, v;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n < len2)
		len2 = n;
	v = len1 = len2 = 1;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		p[i + j] = s2[j];
		j++;
	}
	p[i + j] = '\0';
	return (p);
}
