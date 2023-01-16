#include "dog.h"

/**
 * init_dog - initializes a dog.
 * @d: struct dog
 * @name: name of the dog.
 * @age: age of the dog
 * @owner: name of owner.
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
