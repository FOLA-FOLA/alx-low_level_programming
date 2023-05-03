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
	int c, a;

	while(*s != '\0')
	{
		c += 1;
		s += 1;
	}
	s--
	for (a = c - 1; a >= 0; a--)
	{
		_putchar(*s);
		s--;
	}
}
