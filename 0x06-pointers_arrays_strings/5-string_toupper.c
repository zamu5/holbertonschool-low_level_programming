#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int x = 0;

	for(x = 0 ; s[x] != '\0' ; x++)
	{
		if (s[x] > 96 && s[x] < 123)
		{
			s[x] = s[x] - 32;
		}
	}
	return (s);
}
