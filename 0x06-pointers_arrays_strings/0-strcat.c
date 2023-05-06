#include "main.h"
/**
 * _strcat - concatenated two strings.
 *
 * @src: string to be concatenated
 * @dest: string to be concatenated to.
 *
 * Return: @dest, the newly concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(dest + i) != '\0')
	{
		i += 1;
	}
	for (j = 0; src[j] != '\0'; j += 1)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
