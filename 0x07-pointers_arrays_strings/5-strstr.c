#include "holberton.h"
/**
 * _strstr - Write a function that locates a substring.
 * @haystack: declaration
 * @needle: declaration
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, s, d, f, length;

	while (needle[x] != '\0')
		x++;
	length = x;
	for (x = 0, f = 0 ; haystack[x] != '\0' ; x++)
	{
		for (y = 0 ; needle[y] != '\0' ; y++, f = 0)
		{
			s = x;
			d = y;
			while (haystack[s] == needle[d] && needle[d] != '\0')
			{
				f++;
				s++;
				d++;
			}
			if (f == length)
				return (haystack + x);
		}
	}
	return (0);
}
