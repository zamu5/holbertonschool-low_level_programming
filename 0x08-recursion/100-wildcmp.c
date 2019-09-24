#include "holberton.h"
/**
 * wildcmp - check the code for Holberton School students.
 * @s1: decla
 * @s2: decla
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != 0 && *s2 != 0)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s2 == 42)
	{
		if (s1[1] != 0 && s2 != 0)
			return (0);
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);

}
