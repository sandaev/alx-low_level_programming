#include "lists.h"

/**
 * add_dnodeint_end - adds node to the end of a dlinked list
 * @head: double pointer to linked list
 * @n: integer
 * Return: address of the new element on auccess; NULL otherwise
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (temp == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;

		return (new);
	}
	/* traverse list to the end */
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	new->prev = temp;
	new->next = NULL;
	new = *head;

	return (new);
}
