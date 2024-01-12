#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning of doubly linked list
 *
 * @head: double pointer to dlinked list
 * @n: value of node
 *
 * Return: the address of the new element on success; NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	/* if list is not empty */
	new->next = *head;
	(*head)->prev = new;
	new->prev = NULL;
	*head = new;

	return (new);
}
