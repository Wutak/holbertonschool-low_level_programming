#include <stdlib.h>
/**
 * *_strdup - check desc
 * @str: string
 * desc: strdup
 * Return: 0
 */
char *_strdup(char *str)
{
	char *p, *r;
	int i = 0;

	if (!str)
		return (NULL);

	p = str;
	while (*p++)
		i++;

	r = malloc(i + 1);
	if (!r)
		return (NULL);

	p = r;
	while (*str){
		*p++ = *str++;
	
	*p = 0;
	return (r);
}
