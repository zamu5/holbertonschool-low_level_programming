#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * spacestr - length of string
 * @str: name or owner
 * Return: length of the string
 */
char *spacestr(char *str)
{
	int length, x;
	char *pp;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	pp = malloc((length + 1) * sizeof(char));
	if (pp == NULL)
		return (NULL);
	for (x = 0; x <= length; x++)
		pp[x] = str[x];
	return (pp);
}




/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return:a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = spacestr(name);
	p->age = age;
	p->owner = spacestr(owner);
	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
	}
	return (p);
}
