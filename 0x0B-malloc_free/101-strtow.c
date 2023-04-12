#include <stdlib.h>
#include "main.h"
/**
 * count_word - CountS the number of words in a string
 * @s: string whose words is to be counted
 *Return: number of words in s
 */
int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * **strtow - splits a string into words
 * @str: string to be splitted
 *Return: pointer to an array of strings (Success), NULL (Error)
 */
char **strtow(char *str)
{
	char **mx, *tmp;
	int x, y = 0, len = 0, words, z = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	mx = (char **) malloc(sizeof(char *) * (words + 1));
	if (mx == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				mx[y] = tmp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
	}

	mx[y] = NULL;

	return (mx);
}
