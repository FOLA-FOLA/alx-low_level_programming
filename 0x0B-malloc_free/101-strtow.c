#include "main.h"
#include <stdlib.h>

void utl(char **, char *);
void c_w(char **, char *, int, int, int);

/**
 * strtow - Splits a string into words.
 *
 * @str: The strinf to be changed.
 *
 * Return: Pointer (To array of strings)
 */
char **strtow(char *str)
{
	int i, flag, lengo;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	i = flag = lengo = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
			flag = 1;
		if (i > 0 && str[i] == ' ' && str[i + 1] != ' ')
		{
			flag = 0;
			lengo++;
		}
		i++;
	}

	lengo += flag == 1 ? 1 : 0;
	if (lengo == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (lengo + 1));
	if (words == NULL)
		return (NULL);
	utl(words, str);
	words[lengo] = NULL;
	return (words);
}
/**
 * utl - a util function for fetching array words.
 *
 * @words: the array
 * @str: The string
 *
 * Return: void
 */
void utl(char **words, char *str)
{
	int i, j, start, flag;

	i = j = flag = 0;
	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			start = i;
			flag = 1;
		}
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			c_w(words, str, start, i, j);
			j += 1;
			flag = 0;
		}
		i += 1;
	}
	if (flag == 1)
		c_w(words, str, start, i, j);
}
/**
 * c_w - Creates word and slot into array.
 *
 * @words: array of strings
 * @str: the string.
 * @start: first index of word.
 * @end: send index of word.
 * @index: the index for insertion.
 */
void c_w(char **words, char *str, int start, int end, int index)
{
	int i, j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * (i + 1));

	for (j = 0; start < end; start++, j++)
	{
		words[index][j] = str[start];
	}
	words[index][j] = '\0';
}
