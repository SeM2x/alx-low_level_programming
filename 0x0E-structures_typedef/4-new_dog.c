#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: name
 * @age: age
 * @owner: ownwe
 *
 * Return: a pointer to the new allocated memory or NULL;
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t)*4);
	if (d == NULL)
		return (NULL);

	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);

	return (d);
}
