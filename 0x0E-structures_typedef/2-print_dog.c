#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the information of the struct dog
 * @d: struct
 * Return - Nothing
 */
void print_dog(struct dog *d)
{
	d->name = d->name == NULL ? "(nil)" : d->name;
	d->owner = d->owner == NULL ? "(nil)" : d->owner;
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
