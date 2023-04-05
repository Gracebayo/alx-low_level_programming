#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: The head node of the list.
 */
void free_listint(listint_t *head)

{
	listint_t *fast;

	while (head)
	{
		fast = head->next;
		free(head);
		head = fast;
	}
}
