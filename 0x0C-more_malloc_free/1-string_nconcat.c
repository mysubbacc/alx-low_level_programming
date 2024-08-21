#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two strings together withn n number
 * @s1: string 1
 * @s2: string 2
 * @n: n number
 * Return: NULL or a pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
