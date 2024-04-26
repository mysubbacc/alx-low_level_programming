#include "main.h"

/**
 * _print_rev_recursion - print in reverse orther
 * @s: holds the strinf
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}

