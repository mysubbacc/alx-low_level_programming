#include "main.h"

/**
 * _strcmp - compare strings s1 and s2
 * @s1: first string
 * @s2: second string
 * Return:
 *    0 if the strings are equal,
 *    negative value if s1 is less than s2,
 *    positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
