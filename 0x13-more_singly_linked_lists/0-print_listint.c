#include "lists.h"

/**
 * print_listint - A function that returns the number of elements
 * in a linked list
 *
 * @h: Pointer to first node
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		print("%d\n", h->n)
		h = h->next;
		nodeCount++;
	}
	printf("%d\n", h->n);
	return (nodeCount);
}
