#include "lists.h"

/**
 * free_list - This function frees the
 * memory allocated for a list.
 *
 * @head: Pointer (To the head node).
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
