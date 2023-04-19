#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Printed opcodes
 * Error if number of the argument is not correct one
 * Error (if number of bytes is negative)
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", arr[a]);
			break;
		}
		printf("%02hhx ", arr[a]);
	}
	return (0);
}
