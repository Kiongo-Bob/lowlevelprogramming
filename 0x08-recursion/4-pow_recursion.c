#include "main.h"

/**
 * _pow_recursion: calculates the power of a number using recursion
 * @x: base
 * @y: exponent
 * Return: result of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1; // Invalid input, power is undefined for negative exponents
    }
    else if (y == 0)
    {
        return 1; // Base case: any number raised to the power of 0 is 1
    }
    else
    {
        return x * _pow_recursion(x, y - 1); // Recursive call: multiply x with power of (x, y - 1)
    }
}

