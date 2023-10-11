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

	if (!name)
		d->name = '\0';
	else
		d->name = strdup(name);
	if (!owner)
		d->owner = '\0';
	else
		d->owner = strdup(owner);
	d->age = age;

	return (d);
}
