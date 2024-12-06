#include <stdio.h>
#include "lists.h"
/**
 * print_dlistinct - print list
 * @h: head
 * Return: n
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
