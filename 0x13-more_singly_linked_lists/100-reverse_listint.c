#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @head: Pointer to the pointer to the first node of the list
 *
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;

	while (current)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}
