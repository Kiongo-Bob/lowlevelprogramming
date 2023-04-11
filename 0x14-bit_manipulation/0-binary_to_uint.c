#include "main.h"
/**
 * binary_to_uint - convert a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int bit = 1;

    for (int i = strlen(b) - 1; i >= 0; i--)
    {
        if (b[i] == '1')
            result += bit;

        if (b[i] != '0' && b[i] != '1')
            return 0;

        bit *= 2;
    }

    return result;
}

