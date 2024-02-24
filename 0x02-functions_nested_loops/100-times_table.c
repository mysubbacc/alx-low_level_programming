#include "main.h"

/**
 * print_times_table-print multiplications table
 * Return: void
 */

void print_times_table(int n)
{
	if (n > 0 && n < 15) {
	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int product;
			product = i * j;

			if (j == 0)
				_putchar(product + '0');
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 100)
			{
				int r;
				r = product % 100;
				_putchar((product / 100) + '0');
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			if (j < n)
			{
				_putchar(',');
				
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}


			


