#include "lists.h"

/**
 * free_dlistint - list
 * @head: head
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
