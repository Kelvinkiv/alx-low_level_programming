#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locate a character in a string
 * @s: The string
 * @c: Character to be located
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}
