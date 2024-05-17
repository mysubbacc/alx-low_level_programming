#include "main.h"

/**
  * is_prime_help - help find rime number
  * @n: the number
  * @c: trial number
  * Return: 0 or 1
  */

int is_prime_help(int n, int c)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == c)
	{
		return (1);
	}
	if (n % c == 0)
	{
		return (0);
	}
	return (is_prime_help(n, c + 1));
}

/**
  * is_prime_number - check for a prie number
  * @n: is a number
  * Return: 1 or 0
  */

int is_prime_number(int n)
{
	return (is_prime_help(n, 2));
}
