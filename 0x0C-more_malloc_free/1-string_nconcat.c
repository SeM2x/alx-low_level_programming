#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates two strings.
 *@s1: string 1
 *@s2: string 2
 *@n: chars to concat
 *
 *Return: a pointer to the allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *temp;
	unsigned int i;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}

	if (!s2)
	{
		s2 = malloc(sizeof(char));
		*s2 = '\0';
	}

	if (n > strlen(s2))
		n = strlen(s2);
	str = malloc((strlen(s1) + n + 1) * sizeof(char));
	if (!str)
		return (NULL);
	temp = str;
	while (*s1 != '\0')
	{
		*temp = *s1;
		temp++;
		s1++;
	}

	for (i = 0; i < n; i++)
	{
		*temp = *s2;
		temp++;
		s2++;
	}

	*temp = '\0';
	return (str);
}
