#include "lists.h"

/**
 * add_nodeint - This function adds a node to
 * the beginning of the singly linked list.
 *
 * @head: The head node of the linked list
 * @n: The data to be added.
 *
 * Return: Pointer (to the new node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL || head == NULL)
	{
		return (NULL);
	}
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
