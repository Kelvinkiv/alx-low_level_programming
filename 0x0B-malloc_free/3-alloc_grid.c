#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of integers
 * @width: matrix width
 * @height: matrix height
 *Return: pointer to the created matrix (Success) or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **c;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	c = (int **) malloc(sizeof(int *) * height);

	if (c == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		c[a] = (int *) malloc(sizeof(int) * width);
		if (c[a] == NULL)
		{
			free(c);
			for (b = 0; b <= a; b++)
				free(c[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			c[a][b] = 0;
		}
	}
	return (c);
}
