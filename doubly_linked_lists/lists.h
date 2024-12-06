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
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dtlistint(const dlistint_t *h);

#endif
