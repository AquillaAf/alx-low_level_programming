#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to 2d array of int.
 * @width: size of the row
 * @height: size of the column
 *
 * Return: a variable that points to the grid
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **gr;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gr = malloc(height * sizeof(int));

	if (gr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gr[i] = malloc(width * sizeof(int));

		if (gr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(gr[i]);
			free(gr);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			gr[i][j] = 0;
		}
	}
	return (gr);
}
