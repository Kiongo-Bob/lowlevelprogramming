#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A function
 * Description - That checks for a digit
 * @c: function argument used
 * Return: (1) if digit else return (0) 
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
