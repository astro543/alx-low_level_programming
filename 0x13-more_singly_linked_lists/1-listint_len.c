#include "lists.h"

/**
 * listint_len - it returnls the number of elements
 * in a linked listint_t list
 * @h: Thi is a pointer to the head of the list
 *
 * it Returns: the number of elemtnts in the listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
