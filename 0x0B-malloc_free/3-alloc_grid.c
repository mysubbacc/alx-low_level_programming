#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for two D arrays
 * @width: rows of the array
 * @height: columns of the array
 * Return: NULL or pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int  *));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}

			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
