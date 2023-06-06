#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - This function concats two strings.
 *
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: A char (The new string)
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, p, len = 0, len2 = 0;
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (*(s2 + len) != '\0')
	{
		if (s2 == NULL)
		{
			len = 0;
		}
		len += 1;
	}
	while (*(s1 + len2) != '\0')
	{
		if (s1 == NULL)
		{
			len2 = 0;
		}
		len2 += 1;
	}

	j = len + len2 + 1;
	a = malloc(sizeof(char) * j);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		a[i] = s1[i];
	}

	for (p = 0; s2[p] != '\0'; p++)
	{
		a[i + p] = s2[p];
	}

	a[i + p] = '\0';

	return (a);
}
