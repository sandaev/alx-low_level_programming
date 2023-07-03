#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked
 * list_t list
 * @h: Pointer to linked list
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	/* Variable for holding number of ele */
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

