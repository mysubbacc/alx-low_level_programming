#include "main.h"

/**
  * *_strstr - return a sub string
  * @haystack: source sring
  * @needle: substring
  * Return: subsring
  */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *n = needle;
		char *h = haystack;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (&(*haystack));
		}

		haystack++;
	}
	return (0);
}
