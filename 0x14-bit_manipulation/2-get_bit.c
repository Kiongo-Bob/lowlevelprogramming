#include "main.h"

/**
 * get_bit - To return the value of a bit at a specified index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */

int get_bit(unsigned long int num, unsigned int ind:)
{
	unsigned int s;

	if (num == 0 && ind < 64)
		return (0);

	for (s = 0; s <= 63; num >>= 1, s++)
	{
		if (ind == s)
		{
			return (num & 1);
		}
	}

	return (-1);
}

