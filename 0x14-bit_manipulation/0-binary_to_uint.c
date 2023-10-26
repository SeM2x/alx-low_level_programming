#include "main.h"

/**
 *all_digits - check if b is correct
 *@b: binary number
 *
 *Return: 1 if correct 0 otherwise.
 */
int all_digits(char *b)
{
	if (!b)
		return (0);
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
	}

	return (1);
}

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: binary number
 *
 *Return: b in decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	if (!all_digits(b))
		return (0);

	if (strlen(b) == 1)
		return (atoi(b));

	return ((*b - '0') *pow(2, strlen(b) - 1) + binary_to_uint(++b));
}
