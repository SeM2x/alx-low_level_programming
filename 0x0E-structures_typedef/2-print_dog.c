#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: dog
 *
 * Return: Void.
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name != NULL)
			printf("%s\n", d->name);
		else
			printf("(nil)\n");
		printf("Age: %.6f\nOwner: ", d->age);
		if (d->owner != NULL)
			printf("%s\n", d->owner);
		else
			printf("(nil)\n");
	}
}

