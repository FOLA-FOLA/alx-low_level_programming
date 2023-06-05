#include "dog.h"
/**
 * print_dog - This function prints a struct dog.
 *
 * @d: This is the address of the dog to be printed.
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (&d->age != NULL)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Name: (nil)\n");
		}

		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
