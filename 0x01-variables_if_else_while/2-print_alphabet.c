#include <stdio.h>
/**
  * main - This function prints all the letters of the
  * alphabet in lowercase
  *
  * Return: This function returns 0
  */
int main(void)
{
	for (char letr = 'a'; letr <= 'z'; letr++)
	{
		putchar(letr);
		putchar(" \n");
	}
	return (0);
}
