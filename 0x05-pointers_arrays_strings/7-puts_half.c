#include "main.h"
/**
 * puts_char - This function should print the
 * second half of a string.
 *
 * @str: This is the string to be used.
 *
 * Return: VOID
 */
void puts_char(char *str)
{
	int len = 0;
	int tmp;

	while (*str != '\0')
	{
		len++;
	}
	for (tmp = len / 2; tmp >= len - 1; tmp++)
	{
		_putchar(*str);
	}
}
