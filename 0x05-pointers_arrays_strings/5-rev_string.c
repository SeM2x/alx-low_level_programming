#include "main.h"

#include "main.h"

/**
 *_strlen - returs the length of a string
 *@s: the given string
 *
 *Return: int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * rev_string - reverses a string
 * @s: the string to reverse
 *
 * Return: void
*/

void rev_string(char *s)
{
        char *s, *tmp;
        int i, j;

        tmp = malloc(sizeof(char) * _strlen(s));
        j = 0;
        i = _strlen(s) - 1;
        while (i >= 0)
        {
        	tmp[j] = s[i];
        	i--;
        	j++;
        }

        s = tmp;
}
