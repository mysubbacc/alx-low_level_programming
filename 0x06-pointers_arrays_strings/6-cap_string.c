#include "main.h"

/**
 * cap_string - capitalize every first word
 * @s: hold the string
 * Return: *
 */
char *cap_string(char *s)
{
	int i;
	int cap_next;

	cap_next = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap_next && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' ||
				s[i] == '?' || s[i] == '"' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			cap_next = 1;
		}

		else
		{
			cap_next = 0;
		}
	}
	return (s);
}
