#include "main.h"
/**
 * print_rev - This function prints a string in
 * reverse, followed by a newline.
 *
 * @s: This is the string to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	while (*s = '\0')
	{
		l += 1;
		s++;
	}
	int i;

	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
