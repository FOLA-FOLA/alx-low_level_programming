#include "main.h"
/**
  * _islower - This function checks if a letter is lowercase
  * or uppercase.
  *
  * int c - lettr whose case is to be examined
  * int tmp : Temporary counter that increases
  * if letter is lowercase
  * char lett - To iterate over all letters of the alphabet
  * int c - letter whose case is to be examined
  *
  * Return: Returns 1 if letter is lowercase and
  * o if the letter is in uppercase
  */
int _islower(int c)
{
	int tmp = 0;
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
	{
		if (lett == c)
		{
			tmp += 1;
		}
	}
	if (tmp > 0)
		return (1);
	else
		return (0);
}
