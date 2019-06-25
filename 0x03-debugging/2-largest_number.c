#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a < 0)
	{
		a = a * -1;
	}
	if (b < 0)
	{
		b = b * -1;
	}
	if (c < 0)
	{
		c = c * -1;
	}
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	if ((a > b && b  > c) || (a > b && c > b))
	{
		largest = a;
	}
	else if ((b > c  && c > a) || (b > c && a > c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
