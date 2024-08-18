#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: pointer to an array of strings(wordss), or NULL on failure
 */

char **strtow(char *str)
{
	int i, j, k, l, m, word_count = 0, word_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}

	}
	if (word_count == 0)
	{
		return (NULL);
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		j = i;

		while (str[j] != ' ' && str[j] != '\0')
		{
			j++;
		}

		word_len = j - i;

		words[k] = (char *)malloc((word_len + 1) * sizeof(char));

		if (words[k] == NULL)
		{
			for (l = 0; l < k; l++)
			{
				free(words[l]);
			}

			free(words);
			return (NULL);
		}

		for (m = 0; m < word_len; m++)
		{
			words[k][m] = str[i + m];
		}

		words[k][word_len] = '\0';

		i = j;
	}

	words[k] = NULL;

	return (words);
}
