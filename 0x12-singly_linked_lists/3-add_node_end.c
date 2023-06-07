#include "lists.h"
/**
 * _strlen - This function obtains the
 * length of a string.
 *
 * @s: The string whose length is to be found.
 *
 * Return: Length.
 */
unsigned int _strlen(char *s)
{
	unsigned int b, a = 0;

	for (b = 0; s[b]; b += 1)
	{
		a += 1;
	}

	return (a);
}

/**
 * add_node_end - add a new node to the end
 * of thye linked list.
 *
 * @head: pointer to linked list.
 * @str: new node->str.
 *
 * Return: Pointer (To new node).
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *tmp;

	if (str == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	if (add->str == NULL)
	{
		free(add);
		return (NULL);
	}
	add->len = _strlen(add->str);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add;

	return (add);
}
