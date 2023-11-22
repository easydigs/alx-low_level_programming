#include "lists.h"

/**
 * pop_listint - function deletes the head node of a linked list
 * @head: pointer to the first node in the list
 *
 * Return: head node's data (n)
*/

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;

	if (*head == NULL)
		return (0);

	temp = *head;
	next = temp->next;
	first_node = temp->n;

	free(temp);

	*head = next;

	return (first_node);
}
