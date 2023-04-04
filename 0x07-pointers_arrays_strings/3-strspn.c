#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, value, check;

	value = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		check = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				value++;
				check = 1;
			}
		}
	}
}

