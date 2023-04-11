#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: input
 * Return: Pointer to the duplicated string else NULL
 */
char *_strdup(char *str)
{
	char *a;
	int j, k = 0;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
		j++;
	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		a[k] = str[k];
	return (a);
}
