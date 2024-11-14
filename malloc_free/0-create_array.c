#include <stdlib.h>
/**
 * *create_array - check desc
 * @size: size of array
 * @c: character
 * desc: create array
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
		return (0);
	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
