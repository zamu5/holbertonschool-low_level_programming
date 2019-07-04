#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 *@s: declaration
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int x, y;

	char datos[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rempl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (x = 0 ; s[x] != '\0' ; x++)
	{
		for (y = 0; y <= 26 ; y++)
		{
			if (s[x] == datos[y])
			{
				s[x] = rempl[y];
			}
		}
	}
	return (s);
}
