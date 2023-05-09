#include "main.h"
/**
 * *_memset - This function fills memory with a constant byte.
 *
 * @s: Memory area to be filled.
 * @b: Bytes to be copied.
 *
 * Return: pointer to s
 */
char *-memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
