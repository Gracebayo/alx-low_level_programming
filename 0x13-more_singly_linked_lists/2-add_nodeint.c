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

	newly_node = malloc(sizeof(listint_t));
	if (!newly_node)
		return (NULL);

	newly_node->n = n;
	newly_node->next = *head;
	*head = newly_node;
	return (newly_node);
}

