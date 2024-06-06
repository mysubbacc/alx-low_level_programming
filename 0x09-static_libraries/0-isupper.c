#include "main.h"

/**
 * _isupper-check for uppercase char
 * @c: is the char for check
 * Return: 1
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

