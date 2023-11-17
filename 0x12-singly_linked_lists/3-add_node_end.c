#include "lists.h"

/**
 * add_node_end - Adds new node at the end
 * @head: Pointer to list object
 * @str: String to add
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
	/*Where new_node is the only node */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
