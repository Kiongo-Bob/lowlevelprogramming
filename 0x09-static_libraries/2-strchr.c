#include "main.h"

/**
 * _strchr - Printout found c
 * @s: ptr to char
 * @c: char params to found
 * Return: *S
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s+=1;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
