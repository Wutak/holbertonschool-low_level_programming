#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h.h>
/**
 * print_list - print list
 * @h: list
 * Return: count
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", strlen(h->str), h->str);
		h = h->next;
		count++;
	}
	return (count);
}
