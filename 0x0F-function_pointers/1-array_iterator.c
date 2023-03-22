#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a fxn given as a param
 * on each element of an array
 * @array: Array to iterate over
 * @size: Size of the arr
 * @action: ptr to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
