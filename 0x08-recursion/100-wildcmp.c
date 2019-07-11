#include "holberton.h"

/**
 * comp - check the code for Holberton School students.
 *@c1: decla
 *@c2: decla
 * Return: Always 0.
 */
int comp(char *c1, char *c2)
{
	if (c2[1] == 42)
		comp(c1, c2 + 1);
	if (*c2 == *c1)
		principal1(c1, c2, 0, 0, 0);
	else if (*c1 != 0)
		return (comp(c1 + 1, c2));
	else
		return (0);
	return (0);
}
/**
 * principal - check the code for Holberton School students.
 * @x1: decla
 * @x2: decla
 * @a: decla
 * @b: decla
 * @c: decla
 * Return: Always 0.
 */
int principal(char *x1, char *x2, int a, int b, int c)
{
	b++;
	if (x1 == x2 && x2 != 0 && x1 != 0)
	{
		principal(x1 + 1, x2 + 1, 0, 0, 0);

	}
	else if (*x2 == 42)
	{
		a = b = c = comp(x1 + 1, x2 + 1);
		if (a == 1)
		{
			principal(x1, x2, a, 0, 0);
		}
	}
	else
	{
		return (1);
	}
	return (0);
}

/**
 * wildcmp - check the code for Holberton School students.
 * @s1: decla
 * @s2: decla
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (principal(s1, s2, 0, 0, 0));

}
