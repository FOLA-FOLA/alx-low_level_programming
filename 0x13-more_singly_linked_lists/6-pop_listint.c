#include "lists.h"
/**
 * pop_listint - This function deletes the
 * head node, returns data.
 *
 * @head: Tis is the head node of the list.
 *
 * Return: the data.
 */

int pop_listint(listint_t **head)
{
	int tmp;
	listint_t temp;

	if (head == NULL)
	{
		return (NULL);
	}

	if ((*head)->n == NULL)
	{
		return (0);
	}

	tmp = (*head)->n;
	temp = (*head);
	(*head) = head->link;
	free(temp);
	temp = NULL;

	return (tmp);
}
