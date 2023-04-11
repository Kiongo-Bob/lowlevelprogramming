#include "main.h"

/**
 * get_Endianness - check the Endianness
 * Return: 0 if big Endian, 1 if little Endian
 */

int get_endianness(void)
{
	unsigned int c;
	char *s;

	c = 1;
	s = (char *) &c;

	return ((int)*s);
}
