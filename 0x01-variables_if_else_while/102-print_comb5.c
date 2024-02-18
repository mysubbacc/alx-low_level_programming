#include <stdio.h>

/**
 * main - print combination of two digits
 * Return: 0
 */

int main(void)
{
    int i = 0;
    int j;

    while (i < 10) {
        j = 0;
        while (j < 10) {
            putchar(i + '0');
            putchar(j + '0');
            putchar(' ');
            j++;
        }
        i++;
    }

    putchar('\n');
    return (0);
}

