#include <stdio.h>
/**
 * main - A program that prints numbers under base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
