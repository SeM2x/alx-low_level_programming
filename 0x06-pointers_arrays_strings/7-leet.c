/**
 *leet - encodes a string into 1337.
 *@s: a string
 *
 *Return: string.
 */

char *leet(char *s)
{
	char letters[] = { 'o', 'l', '-', 'e', 'a', '-', '-', 't' };

	int i, j, diff, length;

	diff = 'a' - 'A';
	length = sizeof(letters) / sizeof(char);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (s[i] == letters[j] || s[i] == letters[j] - diff)
			{
				s[i] = j + '0';
			}
		}
	}

	return (s);
}
