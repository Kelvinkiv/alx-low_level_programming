#include "main.h"
int check_pal(char *s, int a, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - Returns if a string is a palindrome
 * @s: string
 *Return: 1 if the string is a palindrome otherwise return 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns string length
 * @s: string whose length is to be returned
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to be checked
 * @a: iterator
 * @len: The string length
 *
 * Return: 1 if palindrome otherwise return 0
 */
int check_pal(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (check_pal(s, a + 1, len - 1));
}

