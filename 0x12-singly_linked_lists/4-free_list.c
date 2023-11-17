#include "lists.h"

/**
 * free_list - Frees a list
 * @head: head of the linked list
 *
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		free(current_node->str);
		free(current_node);
		head = head->next;
	}
}
