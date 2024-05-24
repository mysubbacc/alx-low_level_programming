#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings and returns 1 if the strings
 * can be considered identical, otherwise return 0.
 * @s1: string to compare to
 * @s2: string with wildcard character
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
  
    printf("Comparing s1: '%s' with s2: '%s'\n", s1, s2);

   
    if (*s1 == '\0' && *s2 == '\0')
    {
        printf("Both strings have reached the end. Returning 1.\n");
        return (1);
    }

   
    if (*s1 == *s2)
    {
        printf("Characters match: '%c'. Moving to next characters.\n", *s1);
        return (wildcmp(s1 + 1, s2 + 1));
    }

    
    if (*s2 == '*')
    {
        
        if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
        {
            printf("Wildcard '*' followed by non-end in s2 but s1 is empty. Returning 0.\n");
            return (0);
        }
       
        if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
        {
            printf("Wildcard '*' match found. Returning 1.\n");
            return (1);
        }
    }

   
    printf("No match found. Returning 0.\n");
    return (0);
}
