#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dog
 * @d: dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
