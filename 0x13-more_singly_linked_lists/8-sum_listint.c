#include "lists.h"

/**
 * sum_listint - Returns the sum of all
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
