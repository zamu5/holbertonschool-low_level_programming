#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using.
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p = NULL;
	char *s;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (p);
	p = malloc(nmemb * size);
	if (p == 0)
		return (p);
	s = (char *)p;
	for (x = 0; x < (nmemb * size); x++)
		*(s + 0) = 0;
	return (s);
}
