#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: source string
 * @accept: set of characters to match
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{

			if (*s == *a)
			{
				length++;
				break;
			}
			a++;
		}

		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (length);
}
