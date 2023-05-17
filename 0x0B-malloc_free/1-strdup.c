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
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
	{
		len += 1;
	}
	srn = (char *)malloc((sizeof(char) * len) + 1);

	if (srn == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		srn[i] = str[i];
	}
	srn[len] = '\0';
	return (srn);
}
