#include "holberton.h"
/**
 * _prime - my fu**kin funtion
 * @x: declaration
 * @y: delcaration
 * Return: Always 0.
 */
int _prime(int x, int y, int z)
{
	if (y <= x)
	{
		if (x % y == 0)
			z++;
		return(_prime(x, y + 1, z));
	}
	if (z == 2)
		return (1);
	return (0);

}
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: declaration
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 1, 0));
}
