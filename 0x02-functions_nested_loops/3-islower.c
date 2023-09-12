#include "main.h"

/**
 * _islower - checks if a char is lowercase
 *
 * Return: 1 if true, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return(0);

}
