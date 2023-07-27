#include "lists.h"

/**
 * free_list - Frees the memory allocated for a linked list.
 * @head: Pointer to the head of the linked list.
 * @head: Pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
