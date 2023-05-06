#include "main.h"
/**
 * *_strncat - This function concatenates two strings.
 *
 * @dest: This is the first string to be concatenated.
 * @src: This is the 2nd string to be concatenated.
 * @n: Number at which string should be terminated.
 *
 * Return: A car/ A pointer to the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*dest != '\0')
	{
		i += 1;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
