#include "main.h"
int check_pal(char *s, int a, int len);
int_strlen_recursion(char *s);
/**
 * is_palindrome - Returns if a string is a palindrome
 * @s: The string to check
 * Return: 1 if string is a palindrome else 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion -  Returns string length
 * @s: The string whose length is to be calculated
 * Return: String length
 */
int_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks if a string is a palindrome
 * @s: String
 * @a: iterator
 * @len: string length
 * Return: 1 if string is a palindrome else 0 if not
 */
int check_pal(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (check_pal(s, a + 1, len - 1));
}
