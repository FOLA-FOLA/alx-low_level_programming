#include "lists.h"

/**
 * freelistint - This function frees a list
 *
 * @head: This is the head node of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (head->next != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
	free(head);

}
