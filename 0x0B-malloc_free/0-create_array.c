#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array, and initializes it with specific char.
 * @size: declaration
 * @c: declaration
 * Return - pointer to the array or NULL if fails.
 */
char *create_array(unsigned int size, char c)
{

	char *s;
	unsigned int x;
	void *p = NULL;

	if(size!=0)
	{
		p = malloc(sizeof(char) * size);
		s = (char *)p;
		for (x = 0; x < size; x++)
		{
			s[x] = c;
		}
		return (s);
	}
	else
		return (p);
}
