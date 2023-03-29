#include "main.h"
#include <stddef.h>
/**
 * _strcpy - Copies string
 * @dest: destination array
 * @src: source array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	return (dest);
}
