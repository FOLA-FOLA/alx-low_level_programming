#include "main.h"
/*
 * _strdup - This function duplicate a string
 *
 * @str: This is the string to be duplicated.
 *
 * Return: The pointer to the string.
 */
char *_strdup(char *str)
{
	char *a;
	char tmp, i;

	for (tmp = 0; str[tmp] != '\0'; tmp += 1)
	{
		;
	}

	*a = malloc((sizeof(char) * tmp));

	if (tmp == 0 || a == 0)
	{
		return (0)
	}

	for (i = 0; i < tmp; i += 1)
	{
		a[i] = str[i]
	}
	return (a);
}
