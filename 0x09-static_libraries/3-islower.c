#include "main.h"

/**
 * _islower - check for lowercase chars
 *
 * @c:checks input of fxn
 *
 * Return: returns (1) if 'c' is lowercase else returns (0) success always
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
