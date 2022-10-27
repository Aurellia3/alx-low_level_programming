#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Delets the node at a given
 * index of a listint_t list.
 * @head: A pointer to the address of the
 * head ofthe listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: Pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(head);
		*head = next;
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;

	}

	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
