#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at a given index
 * @head: Pointer to list
 * @index: Index of node to delete
 *
 * Return: On success 1, 0 upon failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cpy->next == NULL)
			return (-1);
		cpy = cpy->next;
	}
	tmp = cpy->next;
	cpy->next = tmp->next;
	free(tmp);
	return (1);
}
