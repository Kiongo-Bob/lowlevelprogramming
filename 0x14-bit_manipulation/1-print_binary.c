#include "main.h"

/**
 * print_binary - print the binary rep of a number
 * @n: unsigned long int.
 *
 * Return: no return.
 */
void print_binary(unsigned long int num)
{
	if (num >> 0)
	{
		if (num >> 1)
			print_binary(num >> 1);
		_putchar((num & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

