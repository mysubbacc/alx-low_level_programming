#include <stdio.h>

/**
 * main - use putchar in printing
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

