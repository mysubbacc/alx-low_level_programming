#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return: 0
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
