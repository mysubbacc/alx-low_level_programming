#include <stdio.h>

/**
 * main-prints 1 to 100,
 * for multiples of 3 print fizz
 * for multiple of 5 print buzz
 * for multiple of 3 and 5 print fizz buzz
 * Return: 0.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

