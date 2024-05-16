#include "main.h"

/**
  * _sqrt_recursion_helper - help to find the square root of a number
  * @n: the number
  * @b: square root
  * Return: square root
  */

int _sqrt_recursion_helper(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}

	if (b * b > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, b + 1));
}

/**
  * _sqrt_recursion - find the perfect square root of a number
  * @n: the number
  * Return: square root
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_helper(n, 0));
}
