#include "main.h"

/**
 *Pow - calculates X to the power of Y.
 *@X: x
 *@Y: y
 *
 *Return: X ^ Y.
 */
int Pow(int X, int Y)
{
	int power = 1, i;

	for (i = 1; i <= Y; ++i)
	{
		power = power * X;
	}

	return (power);

}

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: binary number
 *
 *Return: b in decimal.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i;

	if (!b)
		return (0);
	n = 0;
	for (i = 0; i < (int) strlen(b); i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n += (b[i] - '0') * Pow(2, strlen(b) - i - 1);
	}

	return (n);
}
