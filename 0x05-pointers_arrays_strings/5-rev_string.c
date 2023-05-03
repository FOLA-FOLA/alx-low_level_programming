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
	int c;

	while(*s != '\0')
	{
		c += 1;
		s += 1;
	}
	int a;

	for (a = c; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
