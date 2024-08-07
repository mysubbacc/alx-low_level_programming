#include <stdio.h>

/**
 * main - prints number of aguement passed to it
 * @argc: arguement count
 * @argv: array of aguement
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);

	return (0);
}

