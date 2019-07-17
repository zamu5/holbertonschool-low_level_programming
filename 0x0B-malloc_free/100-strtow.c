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
	int x, y, z = 0, len = 0, words = 0, start = 0;

	for (x = 0; *(str + x) != '\0'; x++)
	{
		if (*(str + x) != 32 && *(str + (x + 1)) == 32)
			words++;
		if (*(str + x) == 32 && words == 0)
			start++;
	}
	m = (char **) malloc(sizeof(char *) * words);
	if (m != 0)
	{
		z = start;
		for (x = 0; x < words; x++)
		{
			for (y = z; (*(str + y)) != 32; y++, z++)
				len++;
			p = (char *) malloc(sizeof(char) * len);
			if (p != 0)
			{
				for (y = 0; y < len ; y++)
					*(*(m + x) + y) = str[(z - len)];
			}
			else
				return (NULL);
		}
		return (m);
	}
	else
		return (NULL);
}
