#include "main.h"

/**
  * *_strncpy - copy string from  *src to *dest
  * @dest: first string
  * @src: second string
  * @n: number of string to copy from src
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	while (n < i)
	{
		dest[n] = '*';
		n++;
	}

	dest[i] = '\0';
	return (dest);
}
