#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination array
 * @src: source array
 * @n: return value
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < n && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
