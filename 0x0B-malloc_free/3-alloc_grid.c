#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2 dimensional array
 * @width: width of array
 * @height: height o array
 * Return: check code
 */

int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}

	return (array);
}
