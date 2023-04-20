#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: A variable number of numbers to print
 * Return: Printed numbers else don't print (If separator is NULL)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int index;

	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(x, int));

		if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
