#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup -  returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: the string
 *
 *Return: NULL if str = NULL, On success, the _strdup function
 *returns a pointer to the duplicated string.
 *It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *cpy, *temp;

	if (!str)
		return (NULL);

	cpy = malloc(sizeof(char) * strlen(str) - 1);

	if (!cpy)
		return (NULL);
	temp = cpy;
	while (*str != '\0')
	{
		*temp = *str;
		str++;
		temp++;
	}

	return (cpy);
}
