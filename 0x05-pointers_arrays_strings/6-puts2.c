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
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
