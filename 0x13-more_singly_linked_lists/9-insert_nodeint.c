#include "lists.h"
/**
 * get_size - Return the size of linked list
 * @head: Pointer to linked list
 *
 * Return: Integer
 */
int get_size(listint_t *head)
{
	int size = 0;

	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return (size);
}

/**
 * insert_nodeint_at_index - Inserts node at given position
 * @head: double pointer to list
 * @idx: position to insert new node
 * @n: value of new node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new_node;
	unsigned int size = get_size(*head);

	/* Allocate memory*/
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;
	/*Invalid index */
	if (idx > size)
	{
		return (NULL);
	}
	/* If its first nofr */
	else if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		tmp = *head;
		while (--idx)
		{
			tmp = tmp->next;
		}
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
