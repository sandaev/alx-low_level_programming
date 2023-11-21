#include "lists.h"
/**
 * get_nodeint_at_index - Returns the
 * nth node of a list
 * @head: pointer to list
 * @index: index of the node to return
 * Return: Pointer to node if it exists
 * 0 otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*listint_t *tmp; */
	unsigned int i = 0;
	int found = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
		if (i == index)
		{
			found = 1;
			break;
		}
	}
	if (found)
	{
		return (head);
	}
	return (NULL);
}
