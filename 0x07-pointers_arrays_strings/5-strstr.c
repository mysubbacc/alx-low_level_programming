#include "main.h"

/**
  * *_strstr - return a sub string
  * @haystack: source sring
  * @needle: substring
  * Return: subsring
  */

char *_strstr(char *haystack, char *needle)
{
	while (*needle != '\0')
	{
		char *h = haystack;

		while (*h != '\0')
		{
			if (*needle == *h)
			{
				return (&(*h));
			}
			h++;
		}
		needle++;
	}
	return (0);
}
