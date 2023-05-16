#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - This function duplicates a string.
 *
 * @str: This is the string to be duplicated.
 *
 * Return: a char; A copy of @str above.
 */
char *_strdup(char *str)
{
	char *srn;
	char *a;
	int len;

	while (str[len] != '\0')
	{
		len += 1;
	}
	srn = malloc(sizeof((char) * len) + 1);
	a = srn;
	while (*str)
	{
		*a++ = *srn++;
	}
	*a = '\0';
	return (srn);
}
