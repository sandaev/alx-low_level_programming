#include "lists.h"

/**
 * free_list - Frees a list
 * @head: head of the linked list
 *
 * Return: No return
 */

void free_list(list_t *head)
{
	list_t *current_nodi;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
	free(head);
}
