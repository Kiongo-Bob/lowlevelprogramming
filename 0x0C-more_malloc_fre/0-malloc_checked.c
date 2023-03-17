#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocated
 * Return: a ptr
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
