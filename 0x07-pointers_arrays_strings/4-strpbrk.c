#include "holberton.h"
/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: declaration
 * @accept: declaration
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y, flag;

	for (x = 0, flag = 0 ; s[x] != '\0' ; x++, flag = 0)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (s[x] == accept[y])
				flag++;
		}
		if (flag != 0)
			return (s + x);
	}
	return (0);
}
