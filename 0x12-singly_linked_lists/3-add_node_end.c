#include "lists.h"

/**
 * add_node_end - Adds new node at the end of
 * a list_t list
 * @head: Double pointer to list_t object
 * @str: Data of node to be added
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/* Add data to new node */
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	/* If head is null, then new_node is head */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* Else move through the node until the last node */

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
