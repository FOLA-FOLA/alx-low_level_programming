#include "main.h"
/**
 * _strncat - concatenated two strings up to the
 * nth character
 *
 * @src: string to be concatenated
 * @dest: string to be concatenated to.
 * @n: concatenation should stop at the nth
 * character of src.
 *
 * Return: @dest, the newly concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*src != '\0')
	{
		i += 1;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
