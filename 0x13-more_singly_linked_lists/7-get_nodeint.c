#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of list
 * @head: Pointer to list
 * @index: The index of the node to locate
 *
 * Return: Null if node does not exist, otherwise the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
