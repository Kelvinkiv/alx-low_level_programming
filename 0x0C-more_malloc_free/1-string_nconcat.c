#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: Pointer to the allocated memory (Success) NULL (Failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int w, x, y, z;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
		;

	for (x = 0; s2[x] != '\0'; x++)
		;

	if (n > x)
		n = x;

	y = w + n;

	a = malloc(y + 1);

	if (a == NULL)
		return (NULL);

	for (z = 0; z < y; z++)
		if (z < w)
			a[z] = s1[z];
		else
			a[z] = s2[z - w];

	a[z] = '\0';

	return (a);
}

