#include "main.h"
/**
 * _puts_recursion - This function prints a string.
 *
 * @s: This is the string to be printed.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	int q = 0;

	if (s[q] != '\0')
	{
		_putchar(s[q]);
		q++;
		_puts_recursion(s);
	}
}
