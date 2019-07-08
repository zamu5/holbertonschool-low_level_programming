#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a: declaration
 * @size: declaration
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, x, y, v = 0, w = 0, b = size - 1;

	for (x = 0 ; x < size ; x++)
	{
		for (y = 0 ; y < size ; y++)
		{
			if (x == y)
			{
				sum1 = sum1 + *(a + w);
				w = size + 1 + w;
			}
			if (y == b)
			{
				v = size - 1 + v;
				sum2 = sum2 + *(a + v);
				b--;
			}
		}
	}
	printf("%d ", sum1);
	printf("%d\n", sum2);
}
