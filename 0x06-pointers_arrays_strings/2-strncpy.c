#include "main.h"
/**
 * _strncpy - This function copies a string
 *
 * @dest: This is the destination string
 * @src: This is the source string.
 * @n: The size of string. 
 *
 * Return: String copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
