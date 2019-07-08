#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, s, d, f = 0, length = 0;

	while (needle[x] != '\0')
		x++;
	length = x;
	for (x = 0 ; needle[x] != '\0' ; x++)
	{
		for (y = 0 ; haystack[y] != '\0' ; y++)
		{
			s = x;
			d = y;
			while (needle[s] == haystack[d] && needle[s] != '\0')
			{
				f++;
				s++;
				d++;
			}
			if (f == length)
				return (haystack + y);
		}
	}
	return ('\0');
}
