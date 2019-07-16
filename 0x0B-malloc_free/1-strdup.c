#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


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

	while (str[x] != '\0')
	{
		x++;
	}
	if (str != 0)
	{
		p = malloc(sizeof(char) * x);
		s = (char *)p;
		if (p != 0)
		{
			for (y = 0; str[y] != '\0'; y++)
			{
				s[y] = str[y];
			}
			return (s);
		}
		else
			return (p);
	}
	else
		return (p);
}
