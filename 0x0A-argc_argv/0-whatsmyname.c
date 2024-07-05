#include <stdio.h>

/**
 * main - check the main pro
 * @argc: number
 * @argv: vector
 * Return: o
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("%s\n", argv[0]);
		return 1;
	}

	printf("%s\n", argv[1]);
	return 0;
}
