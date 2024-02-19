#include <stdio.h>

/**
 * main - print numbers using putchar
 * Return: 0
 */

int main(void)
{
	int numbers = 0;

	while (numbers < 10)
	{
		putchar(numbers + '0');
		numbers++;
	}
	putchar('\n');
	return (0);
}
