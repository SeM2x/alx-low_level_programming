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

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name == NULL)
		d->name = NULL;
	else
		d->name = strdup(name);
	d->age = age;
	if (owner == NULL)
		d->owner = NULL;
	else
		d->owner = strdup(owner);

	return (d);
}
