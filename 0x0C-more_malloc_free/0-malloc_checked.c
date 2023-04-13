#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Memory to be allocated
 * Return: pointer to the allocated memory (Success), status value 98 (Failure)
 */
void *malloc_checked(unsigned int b)
{
	char *pr;

	pr = malloc(b);
	if (pr == NULL)
		exit(98);
	return (pr);
}
