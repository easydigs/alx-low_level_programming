#include "lists.h"

/**
 * insert_nodeint_at_index -  function that inserts a new node at
 *				a given position
 *
 * @head: pointer to the first node of the list
 * @idx: is the index of the list where the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if it fails or the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;

	if (idx == 0 || (*head == NULL && idx != 0))
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (index = 0; current != NULL && index < idx - 1; index++)
		current = current->next;

	if (idx == 0 || (current != NULL && current->next))
	{
		new_node->next = (idx == 0) ? *head : current->next;
		(idx == 0) ? (*head = new_node) : (current->next = new_node);
	}
	else
	{
		new_node->next = NULL;
		current->next = new_node;
	}

	return (new_node);
}
