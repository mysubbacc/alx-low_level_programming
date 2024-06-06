#include "main.h"

/**
 * *_memset - function fills the first n bytes of the memory area pointed by s
 * @s: charater string to fill
 * @b: constant to fill with
 * @n: number of bytes to fill
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
