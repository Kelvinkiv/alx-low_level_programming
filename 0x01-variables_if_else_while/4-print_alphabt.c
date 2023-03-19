#include <stdio.h>
/**
 * main - A program that prints in lowercase with exception of alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	putchar(c);
	}
	putchar('\n');
	return (0);
}


