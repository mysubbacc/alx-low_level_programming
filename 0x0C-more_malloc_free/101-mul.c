#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

/**
 * multiply - multiplies two strings representing large numbers
 * @num1: first number as a string
 * @num2: second number as a string
 * Return: result of multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len = len1 + len2;
    int *result = malloc(len * sizeof(int));
    char *product;
    int i, j, carry;

    if (!result)
        return (NULL);

    /* Initialize the result array to zero */
    for (i = 0; i < len; i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            result[i + j + 1] = mul % 10;
            carry = mul / 10;
        }
        result[i + j + 1] += carry;
    }

    product = malloc(len + 1);
    if (!product)
    {
        free(result);
        return (NULL);
    }

    i = 0;
    while (i < len && result[i] == 0)
        i++;
    for (j = 0; i < len; i++, j++)
        product[j] = result[i] + '0';
    product[j] = '\0';

    free(result);
    return (*product ? product : strdup("0"));
}

/**
 * _puts - prints a string using _putchar
 * @str: string to print
 */
void _puts(char *str)
{
    while (*str)
        _putchar(*str++);
}

/**
 * main - multiplies two positive numbers passed as command line arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    char *num1, *num2, *product;

    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        _puts("Error\n");
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    product = multiply(num1, num2);
    if (!product)
    {
        _puts("Error\n");
        exit(98);
    }

    _puts(product);
    _putchar('\n');
    free(product);

    return (0);
}
