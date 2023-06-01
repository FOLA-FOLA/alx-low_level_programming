#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - This function prints 
 * the content of a linked list.
 *
 * @h: The pointer to list's head
 *
 * Return: Number of nodes. (Int)
 */
size_t print_list(const list_t *h)
{
	int num = 0;
	list_t *p = (list_t *)h;

	if (h == NULL)
		printf("[0] (nil)");

	while(p != NULL)
	{
		num += 1;
		printf("%s", p->str);
		p = p->next;
	}
	return (num);
}
