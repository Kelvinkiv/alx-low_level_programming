#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: Converted number
 * if there is one or more chars in the string b that is not 0 or 1 return 0
 * if b is NULL return 0
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
	c = 2 * c + (b[a] - '0');
	}

	return (c);
}
