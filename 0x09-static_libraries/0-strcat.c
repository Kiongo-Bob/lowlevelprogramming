#include "main.h"
/**
 * _strcat - Concatenates two strings.
 * @dest: Destination.
 * @src: source.
 * Return: the pointer to dest/ Memory address to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;
	int search = 0;

	while (*(dest + count) != '\0')
	{
		count +=1;
	}

	while (search >= 0)
	{
		*(dest + count) = *(src + search);
		if (*(src + search) == '\0')
			break;
		count +=1;
		search +=1;
	}
	return (dest);
}
