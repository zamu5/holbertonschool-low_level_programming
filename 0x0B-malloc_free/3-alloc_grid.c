#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to 2 dimensional array of integers.
 * @width: declaration
 * @height: declaration
 * Return:a pointer to a new string.
 */

int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int *h = NULL;
	int x, y, z;

	if (width > 0 && height > 0)
	{
		p = (int **) malloc(sizeof(int *) * height);
		if (p != 0)
		{
			for (x = 0; x < height; x++)
			{
				h = (int *) malloc(sizeof(int) * width);
				if (h != 0)
					*(p + x) = h;
				else
				{
					for (z = 0; z < x; z++)
						free(*(p + z));
					free(p);
					return (NULL);
				}

			}
			for (x = 0; x < height; x++)
			{
				for (y = 0; y < width; y++)
				{
					*(*(p + x) + y) = 0;
				}
			}
			return (p);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	return (NULL);
}
