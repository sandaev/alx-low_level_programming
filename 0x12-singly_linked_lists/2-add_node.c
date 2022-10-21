#include "lists.h"
/**
 * add_node - Adds a new node at the begiing of
 * a list_t list
 * @head: Double pointer to first node
 * @str: Pointer to element of node
 * Return: Pointer to linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
