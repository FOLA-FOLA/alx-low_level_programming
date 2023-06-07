#include "lists.h"

/**
 * free_listint2 - This function frees a list
 *
 * @head: This is the head node of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;
	if (head == NULL)
	{
		return;
	}

	if ((*head)->next != NULL)
	{
		p = *head;
		(*head) = (*head)->next;
		free(p);
	}
	*head = NULL;
	free(head);

}
