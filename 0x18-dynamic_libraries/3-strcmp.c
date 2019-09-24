#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 *@s1: declaration
 *@s2: declaration
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int x, p;

	for (x = 0 ; s1[x] != '\0' || s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			p = s1[x] - s2[x];
			return (p);
		}
	}
	return (0);
}
