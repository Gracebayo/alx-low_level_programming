#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: head of the list.
 * Return: Numbers of nodes in a list.
 */

size_t print_listint(const listint_t *h)

{
	size_t sum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		sum++;
		h = h->next;
	}

	return (sum);
}

