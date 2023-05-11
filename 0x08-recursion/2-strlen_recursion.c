#include "main.h"
/**
 * _strlen_recursion - This function returns
 * the length of a string using recursion.
 *
 * @s: This is the string whose length is
 * to be determined.
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
