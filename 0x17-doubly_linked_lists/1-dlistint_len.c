#include "lists.h"
/**
 * dlistint_len - returnas the number of elements in a linked list
 *
 * @h: pointer to linked list
 * Return: integer
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		n++;
		h = h->next;
	}

	return (n);
}
