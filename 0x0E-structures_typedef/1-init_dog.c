#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struc dog
 * @d: struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: the variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
