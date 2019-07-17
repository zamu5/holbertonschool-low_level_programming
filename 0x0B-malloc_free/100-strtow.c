#include "holberton.h"
#include <stdlib.h>

/**
 * strtow - returns a pointer to 2 dimensional array of integers.
 * @str: declaration
 *
 * Return:a pointer to a new string.
 */

char **strtow(char *str)
{
	char **m = NULL;
	char *p = NULL;
	int x, y, c, n, z = 0, len, words = 0, start = 0;

	for (x = 0; *(str + x) != '\0'; x++)
	{
		if (*(str + x) != 32 && (*(str + (x + 1)) == 32 || *(str + (x + 1)) == 0))
			words++;
		if (*(str + x) == 32 && words == 0)
			start++;
	}
	m = (char **) malloc(sizeof(char *) * (words + 1));
	if (m != 0)
	{
		z = start;
		for (x = 0; x < words; x++)
		{
			len = 0;
			for (y = z; (*(str + y)) != 32; y++, z++)
				len++;
			p = (char *) malloc(sizeof(char) * (len + 1));
			*(m + x) = p;
			if (p != 0)
			{
				c = z;
				for (y = 0; y < len ; y++, c++)
					*(*(m + x) + y) = *(str + (c - len));
			}
			else
			{
				for (n = 0; n < x; n++)
					free(*(m + n));
				free(m);
				return (NULL);
			}
			for (; str[z] == 32; z++)
				;
		}
		return (m);
	}
	else
	{
		free(m);
		return (NULL);
	}
}
