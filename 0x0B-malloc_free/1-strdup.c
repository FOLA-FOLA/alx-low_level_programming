#include "main.h"
/**
 * _length - This function gets the length of a string
 *
 * @s: The string whose length is to be determined
 *
 * Return: The length of string (int)
 */
int _length(char *s)
{
	int tmp;

	for (tmp = 0; s[tmp] != '\0'; tmp += 1)
	{
		;
	}
	return (tmp);
}
/**
 * _strdup - This function duplicate a string
 *
 * @str: This is the string to be duplicated.
 *
 * Return: The pointer to the string.
 */
char *_strdup(char *str)
{
	int i, count = _length(str);

	char *a = malloc((sizeof(char) * count));

	if (count == 0 || a == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count; i += 1)
	{
		a[i] = str[i];
	}
	return (a);
}
