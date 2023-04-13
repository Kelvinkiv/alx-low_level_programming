#include "main.h"
#include <stdio.h>
/**
* main - prints the name of a program followed by a new line
* @argc: Input
* @argv: Input
*Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
