#include "main.h"
/**
 * _puts - This function prints a string, followed
 * by a newline to stdout
 *
 * @str: This is the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
