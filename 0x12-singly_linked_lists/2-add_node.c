#include "lists.h"
/**
 * _strlen - This function checks for length of string.
 *
 * @s: A Character.
 *
 * Return: 1
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}

/**
 * add_node - This function adds a new node
 * to the beginning of a linked list.
 *
 * @head: This is the head node of the linked list.
 * @str: The str element of the node. To be duplicated.
 *
 * Return: Pointer (Address of the new node)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t **tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	tmp->str = _strlen(str);
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
