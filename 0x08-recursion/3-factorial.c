#include "main.h"
/**
 * factorial: calculates the factorial of n
 * @n: integer parameter
 * Return: factorial value
 */
int factorial(int n)
{
    if (n < 0)
    {
        return -1; // Invalid input, return -1
    }
    else
    {
        int factorial = 1;
        while (n > 1)
        {
            factorial *= n;
            n--;
        }
        return factorial;
    }
}

