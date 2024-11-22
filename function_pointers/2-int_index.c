#include "function_pointers.h"
/**
 * int_index - index
 * @array: array
 * @size: size of array
 * @cmp: function
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
