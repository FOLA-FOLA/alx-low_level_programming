#include "lists.h"

/**
 * free_listint - This function frees a list
 *
 * @head: This is the head node of the list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p = head;

	if (p == NULL || head == NULL)
	{
		return;
	}

	if (head->next != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
	free(head);

}
