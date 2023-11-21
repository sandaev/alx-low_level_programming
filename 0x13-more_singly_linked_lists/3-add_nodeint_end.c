#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a list
 *
 * @head: Double pointer to list
 * @n: Integer to be added
 * Return: Pointer to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/* If list is empty then new_node is head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* If not traverse list to the end and make last point to next */
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
