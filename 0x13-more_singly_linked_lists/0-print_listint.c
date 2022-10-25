#include "lists.h"
/**
 * print_listint - Prints the elements of a list
 *
 * @h: Pointer to list
 * Return: Number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
