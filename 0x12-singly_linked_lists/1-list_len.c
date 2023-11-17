#include "lists.h"

/**
 * list_len - Returns the number of nodes in a linked list
 *
 * @h: List
 *
 * Return: Size of list
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
