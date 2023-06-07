#include "main.h"

/**
 * argstostr - This function 
 * concatenates all
 * its arguments.
 *
 * @ac: number of args.
 * @av: The args.
 */
char *argstostr(int ac, char **av)
{
	char *p, *a;
	int b, c, d, length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (b = 0; b < ac; b++)
	{
		a = av[b];
		c = 0;

		while (a[c])
		{
			c++;
			length++;
		}
		length++;
	}
	p = (char *)malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);

	for (b = 0, c = 0; b < ac && c < length; b++)
	{
		a = av[b];
		d = 0;

		while (a[d])
		{
			p[c] = a[d];
			d++;
			c++;
		}
		p[c++] = '\n';
	}
	p[c] = '\0';

	return (p);
}
