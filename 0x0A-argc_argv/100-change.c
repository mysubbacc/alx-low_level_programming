#include <stdio.h>
#include <stdlib.h>

/**
 * main - find the minimum number of coins to make change for money.
 * @argc: is the argument count
 * @argv: is the array of arguments
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int cent, i = 0;
	int a = 25, b = 10, c = 5, d = 2, e = 1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= a)
		{
			cent -= a;
		}
		else if (cent >= b)
		{
			cent -= b;
		}
		else if (cent >= c)
		{
			cent -= c;
		}
		else if (cent >= d)
		{
			cent -= d;
		}
		else
		{
			cent -= e;
		}
		i++;
	}

	printf("%d\n", i);
	return (0);
}
