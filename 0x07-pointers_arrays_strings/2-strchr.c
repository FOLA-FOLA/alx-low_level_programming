#include "main.h"
/**
 * *_strchr - This function searches for a charcater's
 * first occurencein a string.
 *
 * @s: This is the string to be searched.
 * @c: This is the character to be searched for in *s
 *
 * Return: Pointer to first occurence of c.
 */
char *_strchr(char *s, char c)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
			return (s);
	}
	return ('\0');
}
