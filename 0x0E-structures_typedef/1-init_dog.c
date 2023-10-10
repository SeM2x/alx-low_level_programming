#include "dog.h"

/**
 * init_dog - initializes a var of type dog
 * @d: dog type var
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
