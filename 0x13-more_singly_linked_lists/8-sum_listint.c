#include "lists.h"

/**
 * sum_listint - Is the sum of all the data in a listint_t list
 * @head: the head node of the list.
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *num = head;

	while (num)
	{
		sum += num->n;
		num = num->next;
	}
	return (sum);
}

