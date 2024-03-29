#include "main.h"

/**
* divisors - Prime number check
* @i: int params
* @j: int params
* Return: bool
*/

int divisors(int i, int j)
{
	if (i % j == 0)
	{
		return (0);
	}
	else if (i / 2 > j)
	{
		return (divisors(j + 2, i));
	}
	else
	{
		return (1);
	}
}

/**
* is_prime_number - prime
* @n: integer params
* Return: recursion
*/

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}
