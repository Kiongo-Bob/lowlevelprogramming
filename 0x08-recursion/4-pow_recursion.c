#include "main.h"

/**
 * _pow_recursion - Pow recursion
 * @x: int params
 * @y: int params
 * Return: Recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
