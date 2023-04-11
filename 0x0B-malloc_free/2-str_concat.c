#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: String one
 * @s2: String two
 * Return: A pointer to the concatenated string else return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	int m, n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	m = n = 0;
	while (s1[m] != '\0')
		m++;
	a = malloc(sizeof(char) * (m + n + 1));

	if (a == NULL)
		return (NULL);

	m = n = 0;
	while (s1[m] != '\0')
	{
		a[m] = s1[m];
		m++;
	}
	while (s2[n] != '\0')
	{
		a[m] = s2[n];
		m++, n++;
	}
	a[m] = '\0';
	return (a);
}
