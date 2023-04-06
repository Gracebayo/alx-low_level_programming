#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a list at a given position
 * @head: The head node of the list.
 * @idx: index where the new node will be added
 * @n: integer to  the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int i;
	listint_t *newly_node;
	listint_t *fast = *head;

	newly_node = malloc(sizeof(listint_t));
	if (!newly_node || !head)
		return (NULL);

	newly_node->n = n;
	newly_node->next = NULL;

	if (idx == 0)
	{
		newly_node->next = *head;
		*head = newly_node;
		return (newly_node);
	}

	for (i = 0; fast && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newly_node->next = fast->next;
			fast->next = newly_node;
			return (newly_node);
		}
		else
			fast = fast->next;
	}

	return (NULL);
}

