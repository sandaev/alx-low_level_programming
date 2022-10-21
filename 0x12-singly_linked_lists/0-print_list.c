#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the list
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
	/* Number of elements */
	size_t num = 0;
	list_t *hv;

	hv = h;

	if (h = NULL)
	{
		printf("Error\n");
		return(1);
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			hv->len = 0;
			printf("[%d] (null)\n", hv->len);
		}
		num++;
		h = h->next;
	}
	return (num);
}
