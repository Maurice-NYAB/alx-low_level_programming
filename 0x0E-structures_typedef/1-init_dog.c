#include "dog.h"
#include <stdio.h>

/**
 * init_dog -  a function that initialize a variable of dog type
 * @d: pointer to the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
