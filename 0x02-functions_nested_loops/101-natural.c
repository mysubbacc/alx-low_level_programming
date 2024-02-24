#include "main.h"
#include <stdio.h>

/**
 * main-add all natural nu!bers
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			i += i;
			printf("%d", i);
		}
	}
	return (0);
}

