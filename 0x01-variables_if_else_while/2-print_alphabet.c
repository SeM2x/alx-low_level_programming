#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints alphabet using putchar
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
