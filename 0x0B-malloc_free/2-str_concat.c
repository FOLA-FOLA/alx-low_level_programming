#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _str_concat - This function concats two strings.
 *
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Return: A char (The new string)
 */
char *_str_concat(char *s1, char *s2)
{
	int i, len = 0;

	while (*(s2 + len) != '\0')
	{
		len += 1;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[len + 1] = s2[i];
	}
	s1[len + i] = '\0';
	return (s1);
}
