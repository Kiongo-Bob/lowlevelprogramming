#include "main.h"

/**
 * _strlen_recursion - a function that returns the len of a str
 *
 * @s: str
 *
 * Return: len
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
