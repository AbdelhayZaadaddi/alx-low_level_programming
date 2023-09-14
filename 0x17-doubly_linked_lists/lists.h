#ifndef LISTS
#define LISTS
#include <stdio.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dlistint_s - doubly 
 * @n: inte
 * @next: points to the next node
 * @prev: points to the previous node
 *
 * Description: doubly linked list node structure
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)

#endif
