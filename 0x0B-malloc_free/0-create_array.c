#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and assign it a specific char
 * @size: Array size
 * @c: specific char to assign
 * Return: pointer to an array else return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);

}
