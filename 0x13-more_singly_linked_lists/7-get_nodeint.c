#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a list.
 * @head: The head of the node of a list
 * @index: Index of the node always 0
 *
 * Return: returns the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int i = 0;
	listint_t *temp_fast = head;

	while (temp_fast && i < index)
	{
		temp_fast = temp_fast->next;
		i++;
	}

	return (temp_fast ? temp_fast : NULL);
}

