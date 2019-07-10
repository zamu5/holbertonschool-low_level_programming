#include "holberton.h"
/**
 * _sqrt - my fu**kin funtion
 * @x: declaration
 * @y: delcaration
 * Return: Always 0.
 */
int _sqrt(int x, int y)
{
	if (y * y == x)
		return (y);
	if (y * y > x)
		return (-1);
	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - the natural square root of a number.
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
