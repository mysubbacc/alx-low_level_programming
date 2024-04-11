#include "main.h"

/**
 * *_strchr - locate charater in a string
 * @s: source string
 * @c: charater been searched for
 * Return: ponint to first charater
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
