#include "main.h"

/**
 * flip_bits - returns the no. of bits to be flipped to change one number to another
 * @num1: num one.
 * @num2: num two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int control;

	for (control = 0; num1 || num2; num1 >>= 1, num2 >>= 1)
	{
		if ((num1 & 1) != (num2 & 1))
			control++;
	}

	return (control);
}

