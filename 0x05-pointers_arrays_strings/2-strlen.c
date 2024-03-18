#include "main.h"

/**
 * _strlen - print lenth of a string
 * *s: hold the string
 * Return: 1
 */

int _strlen(char *s)
{
	int i;
	int j;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	return (j);
}
