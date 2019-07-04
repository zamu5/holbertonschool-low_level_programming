#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 *@s: declaration
 * Return: Always 0.
 */
char *leet(char *s)
{
int x, y;

int datos[] = {65, 97, 69, 101, 79, 111, 84, 116, 76, 108};
int rempl[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0; y <= 10 ; y++)
		{
			if (s[x] == datos[y])
			{
				s[x] = rempl[y];
			}
		}
	}
	return (s);
}
