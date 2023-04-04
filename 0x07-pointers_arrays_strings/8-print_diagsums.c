#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: The sum of the two diagonals
 */
void print_diagsums(int *a, int size)
{
	int j, k, sum1 = 0, sum2 = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		sum1 = sum1 + a[j];

	for (k = size - 1; k <= (size * size) - size; k = k + size - 1)
		sum2 = sum2 + a[k];
	printf("%d, %d\n", sum1, sum2);
}
