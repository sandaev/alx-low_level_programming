#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return:Integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @n: new node
 * @idx: index
 * @h: double pointer to link
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	size_t len, c;

	c = 0;

	if (temp == NULL)
	{
		return (NULL);
	}

	len = dlistint_len(*h);

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
	}
	else if (len == idx + 1)
	{
		new = add_dnodeint_end(h, n);
	}
	else if (idx > 0 && idx < len)
	{
		while (c < (idx - 1))
		{
			++c;
			temp = temp->next;
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = temp->next;
		temp->next->next->prev = new;
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}
