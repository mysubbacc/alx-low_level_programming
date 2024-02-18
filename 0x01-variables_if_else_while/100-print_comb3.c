#include <stdio.h>

/**
 * main - print number combinations
 * Return: 0
 */
int main(void)
{
    int nom1 = 0;
    while (nom1 < 9) {
        int nom2 = nom1 + 1;
        while (nom2 < 10) {
            putchar(nom1 + '0');
            putchar(nom2 + '0');
            if (nom1 != 8 || nom2 != 9) {
                putchar(',');
                putchar(' ');
            }
            nom2++;
        }
        nom1++;
    }
    putchar('\n');
    return (0);
}
1
