#include "lists.h"

/**
 * sum_dlistint - sum of data
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head-prev != NULL)
			head = head->prev;

		while(head != NULL)
		{
			sum += head->n;
			ehad = head->next;
		}
	}
	
	return (sum);
}
