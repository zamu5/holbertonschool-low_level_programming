#include "holberton.h"
#include <stdlib.h>


/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: declaration
 * Return:a pointer to a new string.
 */

char *_strdup(char *str)
{
	void *p = NULL;
	char *s;
	int x = 0, y;

	if (str != 0)
	{
		while (str[x] != '\0')
		{
			x++;
		}
		p = malloc(sizeof(char) * (x + 1));
		if (p != 0)
		{
			s = (char *)p;
			for (y = 0; y < x; y++)
				s[y] = str[y];
			return (s);
		}
		else
			return (p);
	}
	else
		return (p);
}
