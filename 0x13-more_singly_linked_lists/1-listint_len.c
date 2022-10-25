#include "lists.h"

/**
 * listint_len - Returns the nuber of elements in a linked list
 *
 * @h: pointer to list
 *
 * Return: Integer
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
