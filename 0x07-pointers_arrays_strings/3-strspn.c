#include "main.h"
#include <stdio.h>

/**
 * _strspn - get the length of a prefix substring
 * @s: source string
 * @accept: set of characters to match
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int p = 0; // Initialize p to 0
    int i = 0;

    while (s[i] != '\0') {
        int j = 0;
        while (accept[j] != '\0') {
            if (s[i] == accept[j]) {
                p++;
                break;
            }
            j++;
        }
        if (accept[j] == '\0') {
            break;
        }
        i++;
    }
    return (p);
}
