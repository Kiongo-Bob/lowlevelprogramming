#include "main.h"

/**
* _strlen_recursion - size
* @s: ptr to str params
;* Return: recursion
*/

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
* p1 - palindrome
* @s: ptr to str
* @l: position
* Return: boolena
*/

int p1(char *s, int p)
{
	if (p < 1)
	{
		return (1);
	}

	if (*s == *(s + p))
	{
		return (p1(s + 1, p - 2));
	}
	return (0);
}

/**
* is_palindrome - palindrome
* @s: ptr to str
* Return: recursion
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
