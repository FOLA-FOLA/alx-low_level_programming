#include "lists.h"
/**
 * sum_listint - The function returns the sum of list elements.
 *
 * @head: This is the head node.
 *
 * Return:Integer (Sum of nodes elements)
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	while (head->next != NULL)
	{
		count += head->n;
		if (head->n = 0)
		{
			count += 0;
		}
		count += head->n;
		head = head->link
	}
	return (count);
}
