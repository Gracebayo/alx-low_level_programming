#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Head of the list.
 * Return: Number of nodes in a list.
 */

size_t listint_len(const listint_t *h)

{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);
}
