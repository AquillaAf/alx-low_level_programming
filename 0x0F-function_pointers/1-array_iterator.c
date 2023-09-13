#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints elements of an array
 * @array: the array
 * @size: number of elem
 * @action:function pointer to execute it
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (action == NULL || array == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
