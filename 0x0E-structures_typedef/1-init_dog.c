#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - This is a prototype of the struct dog
 *
 * @d: pointer to dog
 * @name: dog's name
 * @age: dog's age..
 * @owner: dog's owner
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
