#include <stdio.h>
#include "main.h"

/**
 *_strcmp - compares two strings
 *@dest: destination string
 *@src: source string
 *
 *Return: strings diff
 */

int _strcmp(char *dest, char *src)
{
	int i = 0, n = 0;

	if (dest[i] == '\0')
		return (-src[i]);
	if (src[i] == '\0')
		return (dest[i]);

	while (dest[i] != '\0' && src[i] != '\0' && n == 0)
	{
		if (dest[i] != src[i])
		{
			n = dest[i] - src[i];
		}

		i++;
	}

	return (n);
}
