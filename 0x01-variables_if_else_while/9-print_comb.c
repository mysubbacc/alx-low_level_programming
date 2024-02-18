#include <stdio.h>

/**
 * main - print numbers
 * Return: 0
 */

int main(void)
{
	int nome = 0;
	while(nome < 10) {
		putchar(nome + '0');
		putchar(',');
		putchar(' ');
		nome++;
	}
	putchar('\n');
	return (0);
}
