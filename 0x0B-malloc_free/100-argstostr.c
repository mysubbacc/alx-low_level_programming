#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatnate all augument to main
 * @ac: number of augument
 * @av: array of aurgument
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len, total_len = 0;
	char *str, *ptr;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}

	str = (char *)malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = str;

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}

	*ptr = '\0';
	return (str);
}
