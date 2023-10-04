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
	char *str;
	int i, total_length, current_pos;

	if (!ac || !av)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	str = (char *) malloc(total_length * sizeof(char));
	if (!str)
		return (NULL);

	current_pos = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(str + current_pos, av[i]);
		current_pos += strlen(av[i]);
		str[current_pos] = '\n';
		current_pos++;
	}

	str[current_pos] = '\0';

	return (str);
}
