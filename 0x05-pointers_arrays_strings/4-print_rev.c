#include "main.h"
#include <string.h>
/**
 * print_rev - Print a string in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int c, n;

	s = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	n = strlen(s);
	for (c = n - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
