#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *@s: string
 *
 *Return: 1 if palindrome, 0 otherwise.
 */

int is_palindrome(char *s)
{
	char *str
		;
	str = (char *)malloc(strlen(s) + 1);
	strcpy(str, s);
	if (strlen(str) <= 1)
		return (1);
	if (str[0] != str[strlen(str) - 1])
		return (0);

	str[strlen(str) - 1] = '\0';
	return (is_palindrome(str + 1));
}
