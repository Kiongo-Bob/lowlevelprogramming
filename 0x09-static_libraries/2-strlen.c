#include "main.h"

/**
 * _strlen - returns str len
 * @s: str
 * Return: len of str
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
