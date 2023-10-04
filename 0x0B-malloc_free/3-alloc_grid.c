#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer to an array of int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(width * sizeof(int));
		if (gridout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridout[i]);
			free(gridout);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)

		for (j = 0; j < width; j++)
			gridout[i][j] = 0;

	return (gridout);
}
