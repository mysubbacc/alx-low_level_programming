#include <stdio.h>
#include <stdlib.h>

/**
 * my_isdigit - chect if a number is a digit or not
 * @s: holds the character
 * Return: 0 or 1.
 */

int my_isdigit(char s)
{
	return (s >= '0' && s <= '9');
}

/**
 * main - main add all positive integers or real numbers
 * @argc: arguement count
 * @argv: argumment vector
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");

		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		char *ptr = argv[i];

		while (*ptr)
		{
			if (!my_isdigit(*ptr))
			{
				printf("Error\n");

				return (1);
			}

			ptr++;
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return 0;

}

