#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	unsigned int b, l, i;
	char *a;

	if (s1 == NULL)
		b = 0;
	else
		for (b = 0; s1[b]; ++b)
			;
	if (s2 == NULL)
		l = 0;
	else
		for (i = 0; s2[l]; ++l)
			;
	if (l > n)
		l = n;
	a = malloc(sizeof(char) * (b + l + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
		a[i] = s1[i];
	for (i = 0; i < l; i++)
		a[i + b] = s2[i];
	a[b + l] = '\0';

	return (a);
}
