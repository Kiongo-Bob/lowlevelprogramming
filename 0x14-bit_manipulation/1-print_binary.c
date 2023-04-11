#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int n)
{
    int i;
    int num_bits = sizeof(unsigned long int) * 8;

    for (i = num_bits - 1; i >= 0; i--)
    {
        if ((n >> i) & 1)
            break;
    }

    if (i < 0)
    {
        putchar('0');
        return;
    }

    for (; i >= 0; i--)
    {
        if ((n >> i) & 1)
            putchar('1');
        else
            putchar('0');
    }
}

