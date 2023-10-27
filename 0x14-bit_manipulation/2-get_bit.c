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
