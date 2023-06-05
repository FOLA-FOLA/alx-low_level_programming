#include "dog.h"

/**
 * new_dog - This function creates a new dog_t.
 *
 * @name: This isactually the dog's name.
 * @age: This is apparently the dog's age.
 * @owner: This refers to teh woner of the dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *ow;

	dog_t *nwd = malloc(sizeof(dog_t));;

	n = strdup(name);
	ow = strdup(owner);

	nwd->name = n;
	nwd->age = age;
	nwd->owner = ow;


	if (n == NULL && ow == NULL)
		return NULL;
	return (nwd);

}
