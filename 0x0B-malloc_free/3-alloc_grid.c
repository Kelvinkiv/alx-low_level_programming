#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: Matrix width
 * @height: Matrix height
 * Return: Pointer to a 2 dimensional array else return NULL
 */
int **alloc_grid(int width, int height)
{
	int **c;

	int a, b;



	if (width <= 0 || height <= 0)

		return (NULL);



	c = (int **) malloc(sizeof(int *) * height);


		if (c == NULL)
		return (NULL);


	for (a = 0; a < height; a++)
	{
		c[a] = (int *) malloc(sizeof(int) * width);
	}
		if (c[a] == NULL)
		{
			free(c);

			for (b = 0; b < height; b++)
				free(c[b]);
			return (NULL);
		}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		c[a][b] = 0;
	}
	return (c);
}

