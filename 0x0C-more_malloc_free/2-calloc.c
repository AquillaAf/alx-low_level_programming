#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  malloc to array
 * @nmemb: number of element member
 * @size: size of each element
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *array;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * nmemb);

	if (array == NULL)
	{
		return (NULL);
		free(array);
		exit(1);
	}

	for (j = 0; j < nmemb; j++)
	{
		array[j] = 0;
	}
	return (array);
}
