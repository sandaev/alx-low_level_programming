#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at a given index
 * @n: new node
 * @idx: index
 * @h: double pointer to link
 *
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new;
	int len, c;

	temp = *h;
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
	/* not head not tail */
	else if (idx > 0 && idx < len)
	{
		/* traverse list to the end */
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

