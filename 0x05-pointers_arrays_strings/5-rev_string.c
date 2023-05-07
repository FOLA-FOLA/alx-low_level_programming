#include "main.h"
/**
 * rev_string - This function reverses a string
 *
 * @s: This is the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c = 0;
	int a, d;
	char tmp;

	while (s[c] != '\0')
	{
		c += 1;
	}
	d = c - 1;
	for (a = 0; a < c / 2; ++a)
	{
		tmp = s[a];
		s[a] = s[d];
		s[d] = tmp;
	}
}
