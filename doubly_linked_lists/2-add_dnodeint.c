#include "lists.h"

/**
 * add_dnodeint - add node
 * @head: head
 * @n: n
 * Return: address of element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;
	dlistint_t *h;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	p->next = h;

	if (h != NULL)
		h->prev = p;

	*head = p;
	return (p);
}
