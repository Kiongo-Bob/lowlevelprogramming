#include "main.h"

/**
 * display_binary - Displays the binary representation
 * of a given number.
 * @num: unsigned long int input.
 *
 * Return: None.
 */
void display_binary(unsigned long int num)
{
    if (num > 0)
    {
        if (num >> 1)
            display_binary(num >> 1);
        _putchar((num & 1) + '0');
    }
    else
    {
        _putchar('0');
    }
}

