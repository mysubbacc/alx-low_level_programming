#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area src to me!ory area dest
 * @dest: destimation memory
 * @src: source memoryl
 * @n: number of byte to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}
	return (dest);
}
