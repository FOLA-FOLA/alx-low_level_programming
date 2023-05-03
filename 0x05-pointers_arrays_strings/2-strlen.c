#include "main.h"
/**
 * _strlen - This function returns the length of the string
 *
 * @s: This is the string whose characters is to be counted
 *
 * Return: integer, the length of the string parameter.
 */
int _strlen(char *s)
{
	int tmp = 0;

	while (*s[tmp] != '\0')
	{
		tmp += 1;
	}

	return (tmp);
}
