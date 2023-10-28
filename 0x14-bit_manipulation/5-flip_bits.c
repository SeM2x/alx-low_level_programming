#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index.
 *@n: number.
 *@index: index.
 *Return:  the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int res;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	res = n & (1UL << index);

	for (i = 0; i < index; i++)
		res = res >> 1;

	return (res);
}

/**
 *flip_bits - returns the number of bits you would
 *need to flip to get from one number to another.
 *@n: number.
 *@m: the other number.
 *Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	int size, count, i;

	size = sizeof(unsigned long int) * 8;
	res = n ^ m;
	count = 0;
	for (i = 0; i < size; i++)
	{
		if (get_bit(res, i) == 1)
			count++;
	}

	return (count);
}
