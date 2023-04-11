#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a specified index.
 * @n: ptr of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *num, unsigned int ind)
{
	unsigned int m;

	if (ind > 63)
		return (-1);

	m = 1 << index;

	if (*num & m)
		*num ^= m;

	return (1);
}

