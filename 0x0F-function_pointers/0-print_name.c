#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - This function prints a name.
 *
 * @name: This is the name to be printed
 * @f: The array of pointers
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
int main(void)
{
	return (0);
}
