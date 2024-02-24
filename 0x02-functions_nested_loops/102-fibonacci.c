#include <stdio.h>

/**
 * main print out first 50 fibonacci series
 * @i: iterate through the loop
 * @a: hold first value
 * @b:second value
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long int a = 0;
	unsigned long int b = 1;

	for (i = 1; i < 50; i++)
	{
		unsigned long int j, k, l;
		j = a;
		k = b;
		l = j + k;
		if (i < 49)
			printf("%lu, ", l);
		else
			printf("%lu", l);
		a = k;
		b = l;
	}
	printf("\n");
}



