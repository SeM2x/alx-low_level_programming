#include <stdlio.h>

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
		if (dog->name != NULL)
			printf("%s\n", dog->name);
		else
			printf("(nil)\n");
		printf("Age: %.6f\nOwner: ", dog->age);
		if (dog->owner != NULL)
			printf("%s\n", dog->owner);
		else
			(printf("(nil)\n");
	}
}

