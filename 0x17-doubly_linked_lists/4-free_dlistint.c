#include "lists.h"
/**
 * free_dlistint - frees a dlisint_t list
 * @head: pointer to linked list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
