#include "lists.h"

/**
 * print_list - prints elements in a linked list_t list
 * @h: head pointer of the link list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else 
			printf("[%ld] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	printf("[%ld] %s\n", h->len, h->str);
	return (nodes);
}
