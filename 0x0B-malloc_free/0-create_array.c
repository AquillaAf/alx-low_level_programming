#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function points to a function that creates an array
 * @size: takes the size of the array
 * @c: character that initiates the array
 *
 * Return: NULL if sie is 0
 * if malloc is + return the pointer else NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (0);
	}

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
