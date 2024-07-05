#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints it name
 * @argc: argument
 * @argv: argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
