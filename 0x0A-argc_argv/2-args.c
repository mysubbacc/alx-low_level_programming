#include <stdio.h>

/**
 * main - print all agurement passed to it
 * @argc: is the arguement count
 * @argv: is the array of aguement
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
