#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: String to be printed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
