#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printe
 * Return: Printed string
 * don't print (if separator is NULL)
 * if one string is NULL (return nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *y;
	unsigned int index;

	va_start(x, n);

	for (index = 0; index < n; index++)
	{
		y = va_arg(x, char *);

		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
