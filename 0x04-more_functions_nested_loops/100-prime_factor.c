#include <stdio.h>

/**
 * main-print print factor
 * Return: 1.
 */

int main(void)
{
	unsigned long long int i, n;
	n = 612852475143;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%llu\n", i);
			n = n / i;
			i = 1;
		}
	}
	printf("%llu\n", i);
	return (0);
}
