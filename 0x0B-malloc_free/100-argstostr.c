#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: argc
 *@av: argv
 *
 *Return: a pointer to a new string, or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	char *str, *temp;
	int i, j, size;

	if (!ac || !av)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		size += sizeof(char) * strlen(av[i]);
	}
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	temp = str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; *av[i] != '\0'; j++)
		{ *temp = *av[i];
			temp++;
			av[i]++;
		}

		*temp = '\n';
		temp++;
	}

	return (str);
}
