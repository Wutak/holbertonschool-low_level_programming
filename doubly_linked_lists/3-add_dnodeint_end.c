#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: pointer
 * @n: int
 * Return: p
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = p;
	}
	else
		*head = p;

	p->prev = h;
	return (p);
}
