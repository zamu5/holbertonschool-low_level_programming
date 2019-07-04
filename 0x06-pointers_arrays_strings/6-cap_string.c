#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int x, y;

	int datos[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0 ; y <= 13 ; y++)
		{
			if (s[x - 1] == datos[y] && s[x] > 96 && s[x] < 123)
			{
				s[x] = s[x] - 32;
			}
		}
	}
	return (s);
}
