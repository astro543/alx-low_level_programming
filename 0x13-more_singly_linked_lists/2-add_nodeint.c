#include "lists.h"

/**
 * add_nodeint - it adds a new node at the beginning of a lisint_t list
 * @head: This is a pointer to the address of the head of the listint_t list
 * @n: the integer for the new node to contain
 * Return: NULL if function fails, or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
