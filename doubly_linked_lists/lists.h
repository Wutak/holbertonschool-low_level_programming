#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: int
 * @next: points to next node
 * Return: Nothing
 */
typedef struct dlistint_t
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_dtlistint(const dlistint_t *h);

#endif
