#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: destination array
 * @src: source array
 * @n: The number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
