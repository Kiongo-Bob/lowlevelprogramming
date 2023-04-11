#include "main.h"
/**
 * binary_to_uint - convert a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    if (!b)
        return 0;

    unsigned int result = 0;
    int len = strlen(b);

    for (int i = 0; i < len; i++)
    {
        if (b[i] == '1')
            result = (result << 1) | 1;
        else if (b[i] == '0')
            result <<= 1;
        else
            return 0;
    }

    return result;
}
