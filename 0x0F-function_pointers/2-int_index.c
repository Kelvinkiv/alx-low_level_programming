#include "function_pointers.h"
/**
 * int_index - Searches for an integer
 * @array: array
 * @size: Number of elements in an array
 * @cmp: pointer to the function
 * Return: Index of the first element
 * -1 (if no element matches), 0 (if size <= 0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
