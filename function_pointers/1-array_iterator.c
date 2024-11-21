#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - array
 * @array: pointer
 * @size_t: size
 * @action: function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	while (i < size)
	{
		action(array);
		i++;
	}
}
