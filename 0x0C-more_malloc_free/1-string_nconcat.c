#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * lenstr - Return the length of a string.
 *
 * @s: The string to be indexed.
 *
 * Return: An int.
 */
unsigned int lenstr(char *s)
{
	unsigned int a;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
/**
 * string_nconcat - This function concatenates two
 * string and returns a pointer to
 * the allocated space in memory.
 *
 * @s1: This is the first string, to which s2 is added.
 * @s2: This it the other string to be concatenated
 * to s1.
 * @n: The number of bytes of s2 to be concatenated
 * to s1!
 *
 * Return: A pointer to the new/freshly concatenated
 * string's allocated space!
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, i, le;
	char *a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	le = n;
	if (le < 0)
		return (NULL);

	if (n >= lenstr(s2))
		le = lenstr(s2);

	len = lenstr(s1) + le + 1;

	a = malloc(sizeof(char) * len);
	if (a == NULL)
		return (NULL);

	for (i = 0; s2[i] != '\0' && i < le; i++)
	{
		s1[len + i] = s2[i];
	}
	s1[len + 1] = '\0';

	return (a);
}