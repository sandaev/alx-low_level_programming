#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer to list
 * @index: index of node to be deleted
 * Return: 1 if success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *delete;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	else
	{
		for (i = 0; (i < (index - 1)); i++)
		{
			tmp = tmp->next;
		}
		delete = tmp->next;
		tmp->next = tmp->next->next;
		delete->next = NULL;
		free(delete);
		return (1);

	}
	return (-1);
}
