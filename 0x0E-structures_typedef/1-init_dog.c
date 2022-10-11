#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of struct dog
 * @d: The variable of struct dog to be initialized
 * @name: name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
	free(d);
}
