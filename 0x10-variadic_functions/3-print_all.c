#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: A list of types of arguments passed to the function
 * Return: Anything
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *x, *y = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", y, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", y, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", y, va_arg(list, double));
					break;
				case 's':
					x = va_arg(list, char *);
					if (!x)
						x = "(nil)";
					printf("%s%s", y, x);
					break;
				default:
					a++;
					continue;
			}
			y = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(list);
}
