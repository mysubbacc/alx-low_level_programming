#include "main.h"

/**
  * is plindrome - is an helper function
  * @s: hold the string
  * @i: string length
  * Return: 0 or 1
  */

int is_plindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (is_plindrome(s, start + 1, end - 1));
}
/**
  * is_palindrome - check if a charter string is palindrone
  * @s: holds the string
  * Return: 0 or 1
  */

int is_palindrome(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (1);
	}

	return (is_plindrome(s, 0, i - 1));
}
