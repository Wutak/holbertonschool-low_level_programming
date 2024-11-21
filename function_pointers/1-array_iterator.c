#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - array
 * @array: pointer
 * @size: size
 * @action: function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
