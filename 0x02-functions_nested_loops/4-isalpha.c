#include "main.h"
/**
 * _isalpha- checks for alphabetic character
 * @c: Input
 * Return: 1 if alphabet otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

