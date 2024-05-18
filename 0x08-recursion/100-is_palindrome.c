#include "main.h"

/**
 * is_plindrome - helper function to check for palindrome recursively
 * @s: the string
 * @start: starting index
 * @end: ending index
 * 
 * Return: 1 if palindrome, 0 otherwise
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
 * string_length - helper function to calculate the length of a string recursively
 * @s: the string
 * 
 * Return: the length of the string
 */
int string_length(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    return (1 + string_length(s + 1));
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: the string to check
 * 
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = string_length(s);

    if (length == 0)
    {
        return (1); /* An empty string is considered a palindrome */
    }
    return (is_plindrome(s, 0, length - 1));
}
