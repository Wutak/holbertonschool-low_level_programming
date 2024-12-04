#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != '\0')
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
