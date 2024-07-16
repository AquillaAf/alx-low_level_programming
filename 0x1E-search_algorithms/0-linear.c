#include <stdio.h>
/**
 * linear_search - function searches for a value in an array of int
 *
 * @array: a pointer to the first element in the array
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index where the value was found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if ((array == NULL) || (size == 0))
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[i] = [%d]\n", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
