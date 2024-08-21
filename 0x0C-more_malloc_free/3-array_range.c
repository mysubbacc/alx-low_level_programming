#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max, inclusive
 * @min: The starting integer
 * @max: The ending integer
 * Return: Pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = min + i;

	return (p);
}

