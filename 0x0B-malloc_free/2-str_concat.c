#include "holberton.h"
#include <stdlib.h>


/**
 * str_concat - return the adding of two strings in a new space.
 * @s1: declaration
 * @s2: declaration
 * Return:a pointer to a new string.
 */

char *str_concat(char *s1, char *s2)
{
	void *p = NULL;
	char *s;
	int x = 0, y = 0, z, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc(sizeof(char) * (x + y));
	if (p != 0)
	{
		while (s1[x] != '\0')
			x++;
		while (s2[y] != '\0')
			y++;
		s = (char *)p;
		for (z = 0; z < x; z++)
			s[z] = s1[z];
		for (z = z, c = 0; z < (x + y); z++, c++)
			s[z] = s2[c];
		s[z] = '\0';
		return (s);
	}
	else
		return (p);
}
