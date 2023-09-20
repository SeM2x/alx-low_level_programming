#include "main.h"

/**
 *_strncat - concats two strings
 *@dest: destination string
 *@src: source string
 *@n: number of src bytes
 *
 *Return: concatted string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;
	int i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (res);
}
