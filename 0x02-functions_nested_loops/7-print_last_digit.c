#include "main.h"

/**
 * print_last_digit- print number last digit
 * @n is the number
 * Return: 0
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
		r = -r;
	_putchar(r + '0');

	return (r);

}
