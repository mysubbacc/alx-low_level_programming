#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of byte
 * @size: size of byte
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *str;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;

	return (str);
}
