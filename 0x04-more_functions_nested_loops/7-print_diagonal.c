#include "main.h"

/**
 * print_diagonal-print diagonal line
 * @n: number of diagonal line
 * Return: 0.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;
		j = 0;

		for (i = 1; i <= n; i++)
		{
			for (i = 1; i <= n; i++)
			{
				j++;

				for (i = 0; i < j; i++)
				{
					_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
