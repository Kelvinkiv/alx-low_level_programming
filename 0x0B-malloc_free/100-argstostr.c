#include <stdlib.h>
#include "main.h"

/**
* *argstostr - concatenates all the arguments of a program
* @ac: Arguments params
* @av: array params
*Return: Pointer to the new string (Success), NULL (Error)
*/
char *argstostr(int ac, char **av)
{
	int x, y, z, len;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
	}

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	z = 0;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			a[z] = av[x][y];
			z++;
		}
		a[z] = '\n';
		z++;
	}
	return (a);
}
