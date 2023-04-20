#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of its paramters.
 * @n: Number of parameters to be summed
 * @...: A variable number of paramters whose sum is to be calculated
 * Return: The sum of parameters (Success) else return 0 (if n == 0)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b, sum = 0;

	va_start(a, n);

	for (b = 0; b < n; b++)
		sum += va_arg(a, int);

	va_end(a);
	return (sum);
}
