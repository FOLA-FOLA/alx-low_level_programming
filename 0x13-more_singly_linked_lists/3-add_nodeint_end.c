#include "lists.h"
/**
 * add_nodeint_end - This function adds a node
 * to the end of the list.
 *
 * @head: The head node of the list.
 * @n: THe last node's data.
 *
 * Return: Pointer(to new node).
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *tp;

	p = *head;
	tp = (listint_t *)malloc(sizeof(listint_t));

	if (tp == NULL || p == NULL)
	{
		return (NULL);
	}
	tp->n = n;
	tp->next = NULL;

	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = tp;

	return (tp);
}
