#include <stdio.h>
/**
 * main - A program that prints all possible combinations of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = i + 1; j < 10; j++)
	{
	if (i != j)
	{
		putchar((i % 10) + '0');
		putchar((j % 10) + '0');
	if (i == '8' && j == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

