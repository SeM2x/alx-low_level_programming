#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string
 *
 * Return: string.
 */

char *rot13(char *s)
{
	int i, j;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}

	return (s);

}
