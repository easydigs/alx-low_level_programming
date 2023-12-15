#include "lists.h"

/**
* free_listint_safe - Frees a listint safely.
* @h: Pointer to the head of listint.
*
* Return: The size of the list's freed nodes.
*/

size_t free_listint_safe(listint_t **h)
{
	size_t cnt = 0;
	listint_t *temp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h)
	{
		if (*h - (*h)->next > 0)
		{
			temp = (*h)->next;
		}
		else
		{
			temp = NULL;
		}

		free(*h);
		*h = temp;
		cnt++;
	}

	*h = NULL;
	return (cnt);
}
