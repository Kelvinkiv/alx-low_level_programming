#include "main.h"
#include <stdio.h>
/*
 * print_array - Print n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)

{
	int d;

	for (d = 0; d < n; d++)
	{
	printf("%d", a[d]);
	}
	if (d != (n - 1))
	{
	printf(",");
	}
	printf('\n');
}
