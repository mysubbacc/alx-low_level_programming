#include "main.h"

/**
 * print_line- print line
 * @n: length of line
 * Return: 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

