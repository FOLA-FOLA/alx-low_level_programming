#include "main.h"
/**
 * puts_half - This function should print the
 * second half of a string.
 *
 * @str: This is the string to be used.
 *
 * Return: VOID
 */
void puts_half(char *str)
{
	int len = 0;
	int tmp;

	while (str[len] != '\0')
	{
		len++;
	}
	for (tmp = (len / 2) + 1; tmp < len; tmp++)
	{
		_putchar(str[tmp]);
	}
	_putchar('\n');
}
