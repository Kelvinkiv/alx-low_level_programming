#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 (Big), or 1 (Little)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
