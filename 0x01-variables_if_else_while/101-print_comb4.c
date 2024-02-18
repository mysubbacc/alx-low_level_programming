#include <stdio.h>

/**
 * main - print 3 digit combinations
 * Return: 0
 */

int main(void)
{
	int nom1 = 0;
	while(nom1 < 10) {
		int nom2 = nom1 + 1;
		while(nom2 < 10) {
			int nom3 = nom2 + 1;
			while(nom3 < 10) {
				putchar(nom1 + '0');
				putchar(nom2 + '0');
				putchar(nom3 + '0');
				putchar(',');
				putchar(' ');
				nom3++;
			}
			nom2++;
		}
		nom1++;
	}
	putchar('\n');
	return (0);
}
