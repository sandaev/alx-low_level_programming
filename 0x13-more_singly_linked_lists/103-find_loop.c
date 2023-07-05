#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 * a linked list.
 * @head: pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *h;

	if (head == NULL || head->next == NULL)
		return (NULL);

	t = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (t == h)
		{
			t = head;

			while (t != h)
			{
				t = t->next;
				h = h->next;
			}

			return (t);
		}

		t = t->next;
		h = (h->next)->next;
	}

	return (NULL);
}
