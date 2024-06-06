#include "main.h"

/**
 * _strncat - Concatenate src to dest up to n characters.
 * @dest: Pointer to the first string.
 * @src: Pointer to the string to concatenate to dest.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: Pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}
