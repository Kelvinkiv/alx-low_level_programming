#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: n
 */
char *leet(char *n)
{
	int m, m1;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (m1 = 0; m1 < 10; m1++)
		{
			if (n[m] == s1[m1])
			{
				n[m] = s2[m1];
			}
		}
	}
	return (n);
}
