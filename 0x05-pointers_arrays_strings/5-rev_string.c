#include "holberton.h"
/**
 * rev_string - switch the order of a string
 *@s: declaration
 * Return: reverse string.
 */
void rev_string(char *s)
{
	int cont = 0, x = 0, j, z;

	while (s[x] != '\0')
	{
		cont++;
		x++;
	}
	for (x = 0, j = cont - 1; x < cont / 2; x++, j--)
	{
		z = s[x];
		s[x] = s[j];
		s[j] = z;
	}
}
