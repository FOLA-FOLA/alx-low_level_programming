#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * length - Finds string length.
 *
 * @s: string whose length is to be found.
 *
 * Return: Integer (String length)
 */
int length(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len += 1;
	}
	return (len);
}
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
	int i, j, p, len, len2;
	char *a;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	len = length(s2);
	len2 = length(s1);

	j = len + len2 + 1;
	a = malloc(sizeof(char) * j);

	if (a == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 != NULL)
		return (s1);
	if (s2 == NULL && s1 != NULL)
		return (s2);
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
