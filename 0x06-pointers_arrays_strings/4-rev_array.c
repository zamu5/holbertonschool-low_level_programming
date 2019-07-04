#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x, temp, z;

	for (x = 0, z = n - 1 ; x < (n / 2) ; x++, z--)
	{
		temp = a[x];
		a[x] = a[z];
		a[z] = temp;
	}
}
