#include <string.h>
#include "main.h"

/**
 *wildcmp - returns 1 if the strings can be considered
 *identical, otherwise return 0.
 *@s1: 1st string
 *@s2: 2nd string
 *
 *Return: 1 if identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	char *c;

	c = (char *)malloc(strlen(s1) + 1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));

		if (*(s2 + 1) != *s1)
			return (wildcmp(s1 + 1, s2));

		*c = strrchr(s1, *(s2 + 1));

		if (c)
		{
			return (wildcmp(c, s2 + 1));
		}
	}

	if (*s1 != *s2)
		return (0);

	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	return (wildcmp(s1 + 1, s2 + 1));
}
