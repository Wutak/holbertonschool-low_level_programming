#include <stdlib.h>
/**
 * *malloc_checked - check desc
 * @b: number
 * desc: checking malloc
 * Return: 1
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (ptr);
}
