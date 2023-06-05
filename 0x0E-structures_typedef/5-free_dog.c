#include "dog.h"

/**
 * free_dog - This function frees dogs. (lol).
 *
 * @d: The dog to be freed.
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
