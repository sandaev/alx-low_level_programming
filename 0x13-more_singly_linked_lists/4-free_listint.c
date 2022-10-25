#include "lists.h"
/**
 * free_listint - Frees a listint_t list
 *
 * @head: pointer to lsit
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;	/* current note pointer */

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
