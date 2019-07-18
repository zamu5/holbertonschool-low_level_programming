#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: value of the minimun value
 * @max: value of the maximum value
 * Return: pointer to the newly create array
 */

int *array_range(int min, int max)
{
	void *p = NULL;
	int *s;
	int x;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == 0)
		return (NULL);
	s = (int *)p;
	for (x = 0; min <= max; x++, min++)
		s[x] = min;
	return (s);
}
