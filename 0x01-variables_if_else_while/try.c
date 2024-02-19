#include <stdio.h>

/**
 * main - print numbers separated by comma and space
 * Return: 0
 */

int main(void)
{
    int nome = 0;
    while (nome < 9) { // Adjusted loop condition to avoid printing comma and space after the last number
        putchar(nome + '0');
        putchar(',');
        putchar(' ');
        nome++;
    }
    putchar(nome + '0'); // Print the last number without comma and space
    putchar('\n');
    return 0;
}

