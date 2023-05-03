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
	int le, i;

	while (*s != '\0')
	{
		le += 1;
		s++;
	}
	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
