#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicate a string
 * @str: hold the string
 * Return: NULL or pointer to created space
 */

char *_strdup(char *str)
{
	char *s;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	s = (char *)malloc(len + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
