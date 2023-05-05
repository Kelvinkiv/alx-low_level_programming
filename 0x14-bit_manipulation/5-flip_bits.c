#include "main.h"
/**
 * flip_bits - returns the number of bits you need to flip
 * to get from one number to another
 * @n: ...
 * @m: ...
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int z;
	unsigned long int j = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		z = j >> x;
		if (z & 1)
			y++;
	}

	return (y);
}
