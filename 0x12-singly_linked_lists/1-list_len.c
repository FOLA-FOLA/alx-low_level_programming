#include "main.h"
/**
 * list_len - This function returns the
 * number of elements in a linked list.
 *
 * @h: This is the pointer to the first node.
 *
 * Return: Number of elements in list.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		return (0);
	}
	count += 1;
	return (count + list_len(h->next));
}
