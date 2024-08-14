#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatnate two string together and return pointer
 * @s1: first string
 * @s2: second string
 * Return: NULL or pointer to the string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	a = strlen(s1);
	b = strlen(s2);

	str = (char *)malloc((a + b + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < b; i++)
	{
		str[a + i] = s2[i];
	}

	str[a + b] = '\0';
	return (str);
}

