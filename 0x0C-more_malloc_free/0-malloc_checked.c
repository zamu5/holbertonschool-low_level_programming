#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - write a function that allocates memoty using malloc
 * @b: Size of reserve memory
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
