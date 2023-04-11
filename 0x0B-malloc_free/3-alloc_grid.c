#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: array width
 * @height: height of the array
 * Return: Pointer to a 2 dimensional array else return NULL
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a  == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}
