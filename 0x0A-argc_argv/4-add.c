#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * my_isdigit - Check if a character is a digit.
 * @c: The character to check.
 * Return: 1 if the character is a digit, 0 otherwise.
 */
int my_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - Adds all positive integers provided as command line arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *ptr;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];

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
	return (0);
}
