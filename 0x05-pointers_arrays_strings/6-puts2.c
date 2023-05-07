#include "main.h"
/**
 * puts2 - This function prints any other char
 * in a string.
 *
 * @str: This is the string to be worked upon.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len += 1;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
