#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
	}

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
