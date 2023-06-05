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
		if (d->name == NULL)
		{
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
		}
		else if (&d->age == NULL)
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		}
		else
		{
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		}
	}
}
