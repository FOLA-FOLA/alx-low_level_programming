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
	if (head == NULL)
	{
		return (NULL);
	}
	if (head->link != NULL)
	{
		free(head);
		head = head->link;
	}
	free(head);

}
