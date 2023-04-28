#include "lists.h"

/**
 * sum_listint - it sums up all the data in a linked list
 * @head: This is the head of the list
 *
 * Return: it is the sum of the number
 */

int sum_listint(listint_t *head)
{
	listint_t *cursor = head;
	size_t sum = 0;

	while (cursor != NULL)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}
	return (sum);
}
