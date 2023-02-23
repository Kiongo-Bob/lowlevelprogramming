#include<main.h>
#include<stdio.h>

/**
 *_isupper - This is the function used
 *description - Checks for uppercase letters
 *@c: function argument
 *
 *Return: 1 if c is uppercase and else return(0)
 */

int _isupper(int c);
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
