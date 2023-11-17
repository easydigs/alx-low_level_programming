#include "lists.h"


/**
 * print_list - prints elements in a linked list_t list
 * @h: the head pointer of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%lu] %s\n", h->len, "(nill)");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
