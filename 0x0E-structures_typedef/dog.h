#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - This is a struct containing
 * valuable personal information about
 * a metaphorical dog.
 *
 * @name: This is the name the dog bears
 * @age: The age of the dog
 * @owner: The name of the dear owner */


typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
