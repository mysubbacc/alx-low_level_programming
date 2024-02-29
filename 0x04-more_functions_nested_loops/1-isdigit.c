#include "main.h"

/**
 * _isdigit-check if a char is a digit
 * @c: is the char to check
 * Return: 1
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
