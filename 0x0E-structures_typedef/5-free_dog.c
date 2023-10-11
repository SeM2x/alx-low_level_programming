#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees dogs a dog.
 * @d: dog
 *
 * Return: Void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
