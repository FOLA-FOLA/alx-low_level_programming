#include "main.h"
/**
 * print_name - This function prints a name.
 *
 * @f: The function to pointers.
 * @name: The name to be printed.
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != void && f != void)
	{
		f(name);
	}	
}
