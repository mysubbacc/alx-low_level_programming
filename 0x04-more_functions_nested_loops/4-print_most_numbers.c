#include "main.h"

/**
 * print_most_numbers-print most number from 0 to 9
 * Return: 0.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if ((i != 50) && (i != 52))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

