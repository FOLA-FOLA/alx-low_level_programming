#include <stdio.h>
/**
  * main - prints entire alphabet in
  * uppercase and lowercase
  *
  * Return: This funtion returns a value of 0
  */
int main(void)
{
	char l;
	char u;

	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	}
	for (u = 65; u <= 90; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
