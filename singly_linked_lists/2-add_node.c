#include "list.h"
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
	if (k == '\0')
		return (NULL);

	k->str = strdup(str);
	while (str[count])
		count++;

	n->len = count;
	n->next = *head;
	*head = n;
	return(*head);
}
