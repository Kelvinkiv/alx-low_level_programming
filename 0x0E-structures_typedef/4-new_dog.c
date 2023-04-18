#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns string length
 * @s: string whose length is to be returned
 * Return: Length of s
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
/**
 * *_strcpy - copies string
 * @dest: Destination pointer
 * @src: string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the new dog
 * @age: Age of the new dog
 * @owner: The new dog owner
 * Return:The created dog (Success), NULL (Failure)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int x, y;

	x = _strlen(name);
	y = _strlen(owner);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (x + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (y + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
