#include "main.h"
/**
 * *_strcat - This function concatenates two strings.
 *
 * @dest: This is the first string to be concatenated.
 * @src: This is the 2nd string to be concatenated.
 *
 * Return: A car/ A pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + count) != '\0')
	{
		i += 1;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
