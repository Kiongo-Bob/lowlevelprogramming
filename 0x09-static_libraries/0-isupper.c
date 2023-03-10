#include "main.h"
#include <stdio.h>

/**
 * _isupper - Function called
 * Description: Check for uppercase letters
 * @c: function arg(s)
 *
 * Return: (1) if c is uppercase else returns (0) 
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
