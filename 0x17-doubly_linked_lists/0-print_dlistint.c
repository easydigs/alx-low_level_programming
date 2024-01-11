#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - Prints all elements of a dlistint_t list
* @h: Pointer to the list
* Return: The number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodeCount = 0;

	for (; h != NULL; h = h->next, nodeCount++)
	{
		printf("%d\n", h->n);
	}

	return (nodeCount);
}

