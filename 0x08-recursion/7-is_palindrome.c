#include "holberton.h"
/**
 * length - check the code for Holberton School students.
 * @s: delcaration
 * Return: Always 0.
 */
int length(char *s)
{
	if (*s != 0)
	{
		return (length(s + 1) + 1);
	}
	return (0);
}
/**
 * pal - check the code for Holberton School students.
 * @s: declaration
 * @x: declaration
 * @y: declaration
 * @z: declaration
 * @w: declaration
 * Return: Always 0.
 */
int pal(char *s, int x, int y, int z, int w)
{
	if (x == 0)
		x = w = length(s);
	if (z == w / 2)
		return (1);
	if (s[y] == s[(x - 1)] && z < w / 2)
	{
		z++;
		return (pal(s, x - 1, y + 1, z, w));
	}
	return (0);
}
/**
 * is_palindrome - check the code for Holberton School students.
 * @s: declaration
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	return (pal(s, 0, 0, 0, 0));
}
