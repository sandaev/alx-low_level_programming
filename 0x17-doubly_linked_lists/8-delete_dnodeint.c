#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: double pointer to list
 * @index: position of node to be deleted
 *
 * Return: 1 on success; -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int c, len;

	c = 0;
	temp = *head;
	len = dlistint_len(*head);
	if (*head == NULL || index > (dlistint_len(*head) + 1))
	{
		return (-1);
	}
	if (index == 0)
	{
		if (len == 1)
		{
			temp->next = NULL;
			temp->prev = NULL;
			temp = NULL;
		}
		else
		{
			temp = temp->next;
			temp->prev = NULL;
		}
		*head = temp;
		return (1);
	}
	else if (index > 0 && index < len)
	{
		while (c < (index - 1))
		{
			++c;
			temp = temp->next;
		}
		temp->next = temp->next->next;
		temp->next->next->prev = temp;
		temp = *head;
		return (1);
	}
	return (-1);
}
