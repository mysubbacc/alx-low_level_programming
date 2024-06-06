#include "main.h"

/**
 * main- check for lower 
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 98 && c <= 122)
		return (1);
	else
		return (0);
}
