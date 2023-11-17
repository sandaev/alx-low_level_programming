#include "list.h"

/**
 * list_len - Returns the number of nodes in a linked list
 *
 * @h: List
 *
 * Return: Size of list
 */
size_t list_len(conat list_t *h)
{
	size_t num = 0;

	while (h->next != NULL)
	{
		num++;
	}
	return (num);
}
