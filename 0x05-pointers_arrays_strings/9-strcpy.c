#include "main.h"
/**
 * *_strcpy - This function copies the string in src to dest
 *
 * @src: Source to copy string.
 * @dest: Destination where string should be copied to.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
