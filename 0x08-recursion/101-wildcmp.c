#include "main.h"
/**
 * str_check - Checks if the strings are similar.
 *
 * @s1: Base address 1.
 * @s2: Base address 2.
 * @i: First index
 * @j: Second index.
 *
 * Return: I if it is a palindrome, 0 if not.
 */
int str_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_check(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_check(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_check(s1, s2, i + 1, j) || str_check(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - Check if strings can be considered identical
 *
 * @s1: String 1, base address.
 * @s2: String 2, base address.
 *
 * Return: 1 if strings are identical.
 */
int wildcmp(char *s1, char *s2)
{
	return (str_check(s1, s2, 0, 0));
}
