#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a linked list
 * @head: Pointer to the pointer to the first node of the list
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *temp;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	cur = *head;

	for (i = 0; cur && i < index - 1; i++)
		cur = cur->next;

	if (!cur || !cur->next)
		return (-1);

	temp = cur->next;
	cur->next = temp->next;
	free(temp);

	return (1);
}
