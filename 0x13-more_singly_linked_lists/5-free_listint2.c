#include "lists.h"

/**
 * free_listint2 - Frees a lisint_t list.
 * @head: A pointer to the address of the
 * head of the lisint-t list.
 *
 * Description: Sets the head to the NULL.
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

}
