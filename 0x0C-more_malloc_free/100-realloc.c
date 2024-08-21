#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocate memory for already allocated space
 * @ptr: old pointer
 * @old_size: size of the old space
 * @new_size: new size to allocate
 * Return: NULL or pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;

	if (new_size == old_size)
	{
		return(ptr);
	}

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return(NULL);
	}

	if (ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			return(NULL);
		}
		return(str);
	}

	str = malloc(new_size);
	if (str == NULL)
		return(NULL);

	if (new_size > old_size)
		memcpy(str, ptr, old_size);
	else
		memcpy(str, ptr, new_size);

	free(ptr);

	return (str);
}
