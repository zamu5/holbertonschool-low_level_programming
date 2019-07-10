#include "holberton.h"
/**
 * _sqrt - check the code for Holberton School students.
 * @a: declaration
 * @b: delcaration
 * Return: Always 0.
 */
int _sqrt(int a, int b)
{
	if (y * y == x)
		return (b);
	if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: declaration
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt(n, 2));
}
