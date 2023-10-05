#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *strtow - splits a string into words.
 *@str: str
 *
 *Return: a pointer to an array of strings, or NULL if it fails.
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, size_arr, size_word;
	int is_empty;

	is_empty = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > ' ')
			is_empty = 0;
	}
	if (str == NULL || is_empty)
		return (NULL);
	size_arr = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i + 1] <= ' ')
			size_arr++;
	}
	arr = malloc((size_arr + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str != '\0')
	{
		if (*str != ' ' && *(str - 1) <= ' ')
		{
			size_word = 0;
			for (j = 0; str[j] != ' ' && str[j] != '\0'; j++)
				size_word++;
			arr[i] = malloc((size_word + 1) * sizeof(char));
			if (!arr[i])
				return (NULL);
			strncpy(arr[i], str, size_word);
			arr[i][size_word] = '\0';
			i++;
		}
		str++;
	}
	arr[i] = (NULL);
	return (arr);
}
