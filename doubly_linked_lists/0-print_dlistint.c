#include <stdio.h>
#include "lists.h"
/**
 * print_dlistinct - print list
 * @h: head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->count);
		count++;
		h = h->next;
	}
	return (count);
}
