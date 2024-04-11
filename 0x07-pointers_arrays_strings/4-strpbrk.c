#include "main.h"

/**
 * *_strpbrk - search a string for anynset of bytes locate the first occureance
 * @s: source string
 * @accept: byte searched for
 * Return: pointer tonthe byyein s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (&(*s));
			}
			a++;
		}
		s++;
	}
	return (0);
}
