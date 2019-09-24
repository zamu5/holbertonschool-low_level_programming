#include "holberton.h"
/**
 * _memset - prints buffer in hexa
 * @s: declaration
 * @b: declaration
 *@n: declaration
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x, y;

	y = n;
	for (x = 0 ; x < y ; x++)
	{
		*(s + x) = b;
	}
	return (s);
}
