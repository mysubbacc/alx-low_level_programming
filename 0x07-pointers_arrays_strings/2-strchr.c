#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: source string
 * @c: character been searched for
 * Return: pointer to the first occurrence of the character,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (c == '\0')
	{
		while (s[i] != '\0')
		{
			i++;
		}
		return (&s[i]);
	}

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
