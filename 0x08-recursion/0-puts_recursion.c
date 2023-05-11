#include "main.h"
/**
 * _puts_recursion - This function prints a string using recursion
 *
 * @s: This is the string to be printed.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	_putchar(s);
	_puts_recursion(char *(s + 1));
}
