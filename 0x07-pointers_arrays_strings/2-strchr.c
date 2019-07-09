#include "holberton.h"
/**
 * _strchr - Write a function that locates a character in a string
 * @s: delcaration
 * @c: declaration
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x] != c)
	{
		if (s[x] == '\0')
			return (0);
		x++;
	}
	return (s + x);
}
