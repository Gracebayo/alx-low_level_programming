#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: The head to the node of a list
 *
 * Return: The data that was deleted, or 0 if the list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *data_node;
	int raw;

	if (!head || !*head)
		return (0);

	raw = (*head)->n;
	data_node = (*head)->next;
	free(*head);
	*head = data_node;

	return (raw);
}

