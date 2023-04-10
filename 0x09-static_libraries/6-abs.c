#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 *@a: input value
 *Return: Computed value
 *
 */
int _abs(int a)
{
	int j = a;
	int k;

	if (j < 0)
	{
		j = j * (-1);
	}
	k = j;
	return (k);
}
