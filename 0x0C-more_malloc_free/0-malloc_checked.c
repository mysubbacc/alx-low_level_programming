#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * malloc_checked - allocate memory from the heap
 * @b: amount of byte to allocate
 * Return: NULL or a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
