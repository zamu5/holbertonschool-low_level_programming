#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print the values of hte array.
 *
 * Return: print the arrays.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		if (x != (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d\n", a[x]);
		}
	}
}
