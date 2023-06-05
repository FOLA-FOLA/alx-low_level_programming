#include "dog.h"

/**
 * new_dog - This function creates a new dog_t.
 *
 * @name: This isactually the dog's name.
 * @age: This is apparently the dog's age.
 * @owner: This refers to teh woner of the dog.
 *
 * Return: Pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *ow;

	dog_t *nwd = malloc(sizeof(dog_t));

	n = strdup(name);
	nwd-> name = n;
	if (nwd == NULL)
	{
		return (NULL);
	}
	if (n  == NULL)
	{
		free(nwd);
		return (NULL);
	}
	nwd->age = age;

	ow = strdup(owner);
	nwd->owner = ow;
	if (ow == NULL)
	{
		free(n);
		free(nwd);
		return (NULL);
	}

	return (nwd);

}
