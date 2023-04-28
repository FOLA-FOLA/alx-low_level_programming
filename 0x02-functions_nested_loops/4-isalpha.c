#include "main.h"
/**
 * _isalpha - Checks if parameter is a letter of the alphabet
 *
 * @c: This is the character/int being checked
 *
 * Return: Returns 1 if c is a letter and 0 if otherwise
 */
int _isalpha(int c)
{
	char i;
	int tmp = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			tmp += 1;
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			tmp += 1;
	}
	if (tmp > 0)
		return (1);
	else
		return (0);
}
