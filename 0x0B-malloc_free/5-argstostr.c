#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - returns a pointer to 2 dimensional array of integers.
 * @ac: declaration
 * @av: declaration
 * Return:a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	void *p = NULL;
	char *s;
	int x, y, z = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++)
			;
		len = len + y;
	}
	p = malloc(sizeof(char) * len);
	s = (char *)p;
	if (p != 0)
	{
		for (x = 0; x < ac; x++)
		{
			for (y = 0; *(*(av + x) + y) != '\0'; y++, z++)
				*(s + z) = *(*(av + x) + y);
			*(s + z) = '\n';
			z++;
		}
		return (s);
	}
	else
		return (p);
}
