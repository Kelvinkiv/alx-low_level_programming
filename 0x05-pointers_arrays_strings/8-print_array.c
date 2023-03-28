#include "main.h"
#include <stdio.h>
/*
 * print_array - Prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
	printf("%d, " , a[x]);
	}
	if (x == (n - 1))
	{
	printf("%d", a[n - 1])
	}
	printf("\n");
}
