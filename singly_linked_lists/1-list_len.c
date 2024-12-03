#include "list.h"
#include <stdio.h>

/**
 * list_len - length of a list
 * @h: linked list
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != '\0')
	{
		h = h->next;
		count++;
	}
	return (count);
}
