#include "lists.h"

/**
 * print_listint - This function prints all
 * the elements of the listint_t list.
 *
 * @h: The pointer to the head node.
 *
 * Return: size_t (number of nodes).
 */
size_t print_listint(const listint_t *h)
{
	listint_t *p = (listint_t *)h;
	int ct = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (p != NULL)
	{
		printf("%i\n", p->n);
		ct += 1;
		p = p->next;
	}
	return (ct);
}
