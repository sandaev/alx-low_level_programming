#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: Pointer to list
 *
 * Return: If empty return 0,
 * otherwise data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
