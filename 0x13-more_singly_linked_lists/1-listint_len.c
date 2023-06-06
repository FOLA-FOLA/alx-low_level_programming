#include "lists.h"

/**
 * listint_len - This function returns the
 * number of elements in a linked list.
 *
 * @h: This is the link to the first node.
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	listint_t *p = (listint_t *)h;
	int tmp = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (p->next != NULL)
	{
		tmp += 1;
		p = p->next;
	}

	return (tmp + 1);
}
