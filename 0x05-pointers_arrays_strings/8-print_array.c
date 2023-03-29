#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n elements of an array
 * @a: array name
 * @n: the number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
