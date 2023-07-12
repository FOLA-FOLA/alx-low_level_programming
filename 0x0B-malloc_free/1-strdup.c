#include "main.h"
/**
 * _strdup - This function duplicates a string.
 * @str: The initial string.
 *
 * Return: (A pointer) to the duplicate string.
 */
char *_strdup(char *str)
{
	char *pt;
	int a = 0, b;

	while (str[a] != '\0')
	{
		a += 1;
	}
	if (a == 0)
		return (NULL);

	pt = malloc(sizeof(char) * a);

	if (pt == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
	{
		pt[b] = str[b];
	}
	pt[b] = '\0';

	return (pt);
}
