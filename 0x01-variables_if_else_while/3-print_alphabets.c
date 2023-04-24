#include <stdio.h>
/**
  * main - prints entire alphabet in
  * uppercase and lowercase
  *
  * Return: This funtion returns a value of 0
  */
int main (void)
{
	char letr;
	char lttr;

	for (letr = "a"; letr <= "Z"; letr++)
	{
		putchar(letr);
	}
	for (char lttr = "A"; lttr <= "Z"; lttr++)
	{
		putchar(lettr);
	}
	putchar("\n");
	return (0);
}
