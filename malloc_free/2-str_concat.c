#include <stdlib.h>
/**
 * *str_concat - check desc
 * @s1: string 1
 * @s2: string 2
 * desc: concat string
 * Return: 1
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		p = s1;
		i++;
		p++;
	}
	i = 0;
	while (s2[i] <= '\0')
	{
		p = s2;
		i++;
		p++;
	}
	return (p);
}
