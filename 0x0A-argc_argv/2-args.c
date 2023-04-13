#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments passed to a program each on a new line
 * @argc: Input
 * @argv: Input
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
