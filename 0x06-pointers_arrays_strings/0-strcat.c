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
	char ct = *dest + *src;
	char *cct;

	*cct = &ct;
	return (cct);
}
