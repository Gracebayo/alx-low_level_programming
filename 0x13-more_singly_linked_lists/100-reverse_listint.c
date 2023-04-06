#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list
 * @head: The head of a node in a list
 *
 * Return: pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)

{
	listint_t *prev = NULL;
	listint_t *current = NULL;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;

	return (*head);
}

