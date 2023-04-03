#include "lists.h"

/**
 * add_nodeint - Adds a fresh node at the beginning of a listint_t list.
 * @head: Head of the list.
 * @n: Fresh node
 *
 * Return: The address of the new element, or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *fresh_node;

	fresh = malloc(sizeof(listint_t));
	if (!fresh)
		return (NULL);

	fresh->n = n;
	fresh->next = *head;
	*head = fresh;

	return (fresh);
}
