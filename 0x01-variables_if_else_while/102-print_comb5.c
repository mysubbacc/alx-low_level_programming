#include <stdio.h>

/**
 * main - print two numbers combination
 * Return: 0
 */

int main(void)
{
    int i, j, k, l;
    i = 0;

    while (i < 10)
    {
        j = 0;
        while (j < 9)
        {
            k = 0;
            while (k < 10)
            {
                l = k + 1;
                while (l < 10)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(l + '0');

            
                    if (!(i == 9 && j == 8 && k == 9 && l == 9)) {
                        putchar(',');
                        putchar(' ');
                    }

                    l++;
                }
                k++;
            }
            j++;
        }
        i++;
    }
    putchar('\n');
    return (0);
}

