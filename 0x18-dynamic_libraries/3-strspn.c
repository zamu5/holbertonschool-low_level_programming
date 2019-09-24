#include "holberton.h"
/**
 * _strspn - check the code for Holberton School students.
 * @s: declaration
 * @accept: declaration
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, flag;

	for (x = 0, flag = 0 ; s[x] != '\0' ; x++, flag = 0)
	{
		for (y = 0 ; accept[y] != '\0' ; y++)
		{
			if (s[x] == accept[y])
				flag++;
		}
		if (flag == 0)
			return (x);
	}
	return (x);
}
