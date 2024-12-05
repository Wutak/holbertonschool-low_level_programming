#include <stdlib.h>
#include <string.h>
#include "list.h"
/**
 * add_node_end - add node end
 * @head: head
 * @str: string
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n, *p;
	int c = 0;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	n->str = strdup(str);
	while (str[c])
		c++;
	n->len = c;
	n->next = NULL;
	p = *head;

	if (p == NULL)
		*head = n;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = n;
	}
	return (*head);
}
