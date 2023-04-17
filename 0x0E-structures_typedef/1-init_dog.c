#include"dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @p: Pointer to struct dog
 * @name: name to be initialized
 * @age: age to be initialized
 * @owner: owner to be initialized
 */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p == NULL)
		p = malloc(sizeof(struct dog));
	p->name = name;
	p->age = age;
	p->owner = owner;
}
