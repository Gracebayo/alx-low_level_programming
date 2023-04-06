#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a list at a certain index
 * @head: The head of a node in the list.
 * @index: Index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *fast = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(fast);
		return (1);
	}

	while (i < index - 1)
	{
		if (!fast || !(fast->next))
			return (-1);
		fast = fast->next;
		i++;
	}

	new = fast->next;
	fast->next = new->next;
	free(new);
	return (1);
}

