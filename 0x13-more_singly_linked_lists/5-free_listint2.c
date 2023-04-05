#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: The head node of a list
 * Return: void
 */
void free_listint2(listint_t **head)

{
	listint_t *fast;

	if (head == NULL)
		return;

	while (*head)
	{
		fast = (*head)->next;
		free(*head);
		*head = fast;
	}

	*head = NULL;
}

