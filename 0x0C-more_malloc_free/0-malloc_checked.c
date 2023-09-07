#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  this function allocates memory
 * @b: size of the memory
 *
 * Return: mem
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		free(mem);
		exit(98);
	}
	return (mem);
}
