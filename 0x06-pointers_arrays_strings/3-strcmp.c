#include "main.h"
/**
 * _strcmp - This function compares two strings.
 *
 * @s1: The first string to be compared
 * @s2: The string to be compared to.
 *
 * Return: 0 if both match, a positive int if
 * si is greater and negative if s1 is lesser alphabetically
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] -  s2[i]);
		}
		i += 1;
	}
	return (0);
}
