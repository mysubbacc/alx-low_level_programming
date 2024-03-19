#include "main.h"

/**
 * print_rev - print *s in reverse form
 * *s: string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i, j;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
