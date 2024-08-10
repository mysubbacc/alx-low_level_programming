#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array of specific characters
 * @size: is the size and number of character
 * @c: is the charater
 * Return: 0 or 1
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return(NULL);

	str = (char *)malloc(size * sizeof(char));
	if (str == NULL)
	{
		return(NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return(str);

}
