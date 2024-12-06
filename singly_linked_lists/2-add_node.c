#include "lists.h"
#include <stdio.h>

/**
 * add_node - add a new node
 * @head: head of linked list
 * @str: string
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	size_t count = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}

	while (str[count])
		count++;

	n->len = count;
	n->next = *head;
	*head = n;
	return(*head);
}
