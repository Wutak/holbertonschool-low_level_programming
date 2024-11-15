#include <stdlib.h>
/**
 * *_calloc - check desc
 * @nmemb: number
 * @size: size
 * desc: calloc
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * sizeof(unsigned int));
	if (p == NULL)
		return (NULL);

	c = 0;
	while (c < nmemb * size)
	{
		p[c] = 0;
		c++;
	}
	return (p);
}
