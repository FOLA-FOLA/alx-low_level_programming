#include "main.h"
/**
  * print_alphabet_x10 - this function prints the alphabet 10 times,
  * followed by a new line.
  *
  * curr - current counter for how many times the alphabet has been printed.
  * tmp - current letter of the alphabet being printed.
  *
  * Return: This is a void funtion
  */
void print_alphabet_x10(void)
{
	int curr;

	for (curr = 0; curr < 10; curr++)
	{
		char tmp;

		for (tmp = 'a'; tmp = 'z'; tmp++)
		{
			_putchar(tmp);
		}
	}
	_putchar('\n');
}
