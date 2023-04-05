#include "lists.h"

/**
 * add_nodeint_end - Adds a newly node at the end of a listint_t list.
 * @head: The head node of the list.
 * @n: The integer value to the newly node.
 * Return: If memory allocation fails or head is NULL, returns NULL.
 *         Otherwise, returns a pointer to the newly node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newly_node;
	listint_t *fast = *head;

	newly_node = malloc(sizeof(listint_t));
	if (!newly_node)
		return (NULL);

	newly_node->n = n;
	newly_node->next = NULL;

	if (*head == NULL)
	{
		*head = newly_node;
		return (newly_node);
	}

	while (fast->next)
		fast = fast->next;

	fast->next = newly_node;
	return (newly_node);
}

