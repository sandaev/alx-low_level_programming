#include "lists.h"

/**
 * print_list - Prints a singly linked list
 *
 * @h: List
 *
 * Return: Number of elements
 */
size_t print_list(const list_t *h)
{
	/* Declare variable */
	size_t l = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] (null)\n", h->len);
		l++;
		h = h->next;
	}
	return (l);
}
