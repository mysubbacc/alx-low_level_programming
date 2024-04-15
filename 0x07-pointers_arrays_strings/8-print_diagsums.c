#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - sum up diagonal line
  * @a: pointer to the first element of the array
  * @size: column size
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;
	j = size - 1;

	for (i = 0; i < (size * size); i += size + 1)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[j];

		j += size -1;
	}
	printf("%d, %d\n", sum1, sum2);
}
