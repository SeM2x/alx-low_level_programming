#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: the character to check
 *
 * Return: 1 if true, 0 otherwise
*/

int _isalpha(int c)
{
	if (_islower(c) || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
