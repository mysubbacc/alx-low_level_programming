#include <stdio.h>

/**
 * main - print out base 16 numbers
 * Return: 0
 */

int main(void)
{
	int nombe = 0;
	char lett;

	while (nombe < 10)
	{
		putchar(nombe + '0');
		nombe++;
	}
	lett = 'a';

	while (lett <= 'f')
	{
		putchar(lett);
		lett++;
	}
	putchar('\n');
	return (0);
}
