#include "main.h"

/**
 * swap_int - swap two integers
 * *a: first int
 * *b: second int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;
	*a = *b;
	*b = ptr;
}

