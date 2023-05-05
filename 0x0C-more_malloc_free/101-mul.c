#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - Checks if any number is zero
 * @argv: Input
 * Return: nothing
 */
void _is_zero(char *argv[])
{
	int w, x = 1, y = 1;

	for (w =  0; argv[1][w]; w++)
		if (argv[1][w] != '0')
		{
			y = 0;
			break;
		}

	for (w = 0; argv[2][w]; w++)
		if (argv[2][w] != '0')
		{
			y = 0;
			break;
		}

	if (x == 1 || y == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _initialize_array – Sets memory to zero in a new array
 * @ar: char array
 * @len: length of the char array.
 * Return: pointer of a char array.
 */
char *_initialize_array(char *ar, int len)
{
	int w = 0;

	for (w = 0; w < len; w++)
		ar[i] = '0';
	ar[len] = '\0';
	return (ar);
}

/**
 * _checknum – Determines the length of the number
 * Checks if the number is in the base of 10
 * @argv: Input
 * @n: Input
 * Return: length of the number.
 */
int _checknum(char *argv[], int n)
{
	int a;

	for (a = 0; argv[n][a]; a++)
		if (!isdigit(argv[n][a]))
		{
			printf("Error\n");
			exit(98);
		}

	return (a);
}

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int w, x, y, z, a, b, c, d, e;
	char *j;

	if (argc != 3)
		printf("Error\n"), exit(98);
	w = _checknum(argv, 1), x = _checknum(argv, 2);
	_is_zero(argv), y = w + x, j = malloc(y + 1);
	if (j == NULL)
		printf("Error\n"), exit(98);
	j = _initialize_array(j, y);
	d = y - 1, b = w - 1, c = x - 1, e = a = 0;
	for (; d >= 0; d--, b--)
	{
		if (b < 0)
		{
			if (a > 0)
			{
				z = (j[d] - '0') + a;
				if (z > 9)
					j[d - 1] = (z / 10) + '0';
				j[d] = (z % 10) + '0';
			}
			b = w - 1, c--, a = 0, e++, d = y - (1 + e);
		}
		if (b < 0)
		{
			if (j[0] != '0')
				break;
			y--;
			free(j), j = malloc(y + 1), j = _initialize_array(j, y);
			d = y - 1, b = w - 1, c = x - 1, e = a = 0;
		}
		if (b >= 0)
		{
			z = ((argv[1][b] - '0') * (argv[2][c] - '0')) + (j[d] - '0') + a;
			a = z / 10, j[d] = (z % 10) + '0';
		}
	}
	printf("%s\n", j);
	return (0);
}
