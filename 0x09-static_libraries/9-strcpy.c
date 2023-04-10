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
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
