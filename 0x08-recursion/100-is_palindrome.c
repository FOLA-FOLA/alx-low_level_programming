#include "main.h"
/**
 * _strlen_recursion - Prints length of string.
 *
 * @s: The string to be printed.
 *
 * Return: The length of string.
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * check - Check if s is a palindrome.
 *
 * @s: String.
 * @i: First index
 * @j: Other index
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int check(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
			return (1);
		else
			return (check(s, i + 1, j - 1));
	}
	else
		return (0);
}
/**
 * is_palindrome - Check if s is a palindrome.
 *
 * @s: Base address for string.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s) - 1));
}
