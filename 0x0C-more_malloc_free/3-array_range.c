#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of ints
 * @min: Minimum int
 * @max: Maximum int
 * Return: Pointer to newly created array (Success), NULL (Failure)
 * NULL (if min > max)
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(*a) * ((max - min) + 1));

	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++, min++)
		a[b] = min;

	return (a);
}


