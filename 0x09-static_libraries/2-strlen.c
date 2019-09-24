#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 *@s: declaration
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int cont = 0, x = 0;

	while (s[x] != '\0')
	{
		cont++;
		x++;
	}
	return (cont);
}
