#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: is int that will be used as a function argument
 *
 * Return:(1) if +.0 and (-1) if -
 */

int print_sign(int n)
{
	int color;

	if (n > 0)
	{
		_putchar('+');
		color = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		color = 0;
	}
	else
	{
		_putchar('-');
		color = -1;
	}

	return (color);
}
