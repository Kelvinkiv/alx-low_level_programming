#include "main.h"
/**
 * more_numbers - Print 10 times the numbers since 0 to 14
 * @c: The first int
 * @d: The second int
 * Return: The result of (10 * c)
 */
void more_numbers(void)
{
	int c, d;

	for (c = '0'; c <= '10'; c++)
	{
	for (d = '0'; d <= '14'; d++)
	{
	if (d > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar("\n");
	}
}

