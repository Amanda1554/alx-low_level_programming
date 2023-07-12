#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to to a 2D array of intergers
  * @width: width of grid
  * @height: height of grid
  * Return: pointer to 3D array
  */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **grd;

	x = y = 0;
	if (height < 1)
		return (NULL);
	grd = (int **)malloc(height * sizeof(grd));
	if (grd == NULL)
	{
		free(grd);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grd[x] = malloc(width * sizeof(int));
		if (grd[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(grd[y]);
			free(grd);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			grd[x][y] = 0;
	}
	return (grd);
}
