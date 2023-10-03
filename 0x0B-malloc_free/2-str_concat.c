#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *str_concat - concatenates two strings.
 *@s1: 1st string
 *@s2: 2nd string
 *Return: pointer to a newly allocated space in memory
 *which contains the contents of s1, followed
 *by the contents of s2, and null terminated, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *str, *temp;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}

	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}

	str = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	temp = str;
	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*temp = *s2;
		temp++;
		s2++;
	}

	return (str);
}
