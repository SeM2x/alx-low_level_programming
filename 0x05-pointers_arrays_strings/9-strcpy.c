#include "main.h"
#include <string.h>

/**
 * _strcpy - copies a string to a buffer
 * @dest: the buffer
 * @src: the string
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = strlen(src);
	for (i = 0; i < length; i++)
		dest[i] = src[i];

	return (dest);
}
