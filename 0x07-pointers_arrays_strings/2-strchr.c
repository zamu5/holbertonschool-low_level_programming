#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while( s[x] != c)
	{
		if (s[x] == '\0')
			return (0);
		x++;
	}
	return (s + x);
}
