#include "main.h"

/**
 * _strcat - concats two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: concatted string
*/

char *_strcat(char *dest, char *src)
{
    char *res = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return res;
}
