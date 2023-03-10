#include "main.h"

/**
 * _memcpy - Irontnoux2
 * @dest: ptr to char params
 * @src: ptr to char params
 * @n: size
 * Return: ptr to dest(*dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
