#include "lists.h"

/**
 * add_nodeint - Adds a newly node at the beginning of a listint_t list.
 * @head: Head of the list.
 * @n: Newly node
 *
 * Return: The address of the new element, or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *newly_node;

	fresh = malloc(sizeof(listint_t));
	if (!newly)
		return (NULL);

	newly->n = n;
	newly->next = *head;
	*head = newly;

	return (newly);
}
