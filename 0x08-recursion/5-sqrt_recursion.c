#include "main.h"
/**
* _sqrt_recursion - calculates the square root of a number using recursion
* @n: integer parameter
* Return: square root of n, or -1 if no exact square root exists
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return -1; // Invalid input: square root is undefined for negative numbers
	}
	else
	{
	return _sqrt_helper(n, 0, n);
	}
}

/**
* _sqrt_helper - helper function for square root calculation
* @n: integer parameter
* @low: lower bound of the search range
* @high: upper bound of the search range
* Return: square root of n, or -1 if no exact square root exists
*/
int _sqrt_helper(int n, int low, int high)
{
	if (low > high)
	{
        return -1;
	}

int mid = low + (high - low) / 2;

	if (mid * mid == n)
	{
	return (mid);
	}
	else if (mid * mid < n)
	{
        return (_sqrt_helper(n, mid + 1, high));
	}
	else
	{
        return (_sqrt_helper(n, low, mid - 1));
	}
}

