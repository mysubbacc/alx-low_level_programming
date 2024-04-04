#include "main.h"

/**
  * print_number - print numbers
  * @n: number to print
  * Return: void
  */

void print_number(int n)
{
	unsigned int n1;

	if (0 > n)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
