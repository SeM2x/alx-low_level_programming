#include "main.h"

/**
 * _strspn -   gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int found;
	char *p = s;
	char *a = accept;

	while (*p != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*p == *a)
			{
				count++;
				found = 1;
				break;
			}

			found = 0;
			a++;
		}

		if (!found && count > 0)
			break;
		p++;
	}

	return (count);
}
