#include "holberton.h"
#include <stdio.h>
/**
 * times_table - % funtion
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int x = 0, y = 0, z;

	while (x <= 9)
	{
		y = 0;
		z = x * y;
		printf("%d,", z);
		y++;
		while (y <= 9)
		{
			z = x * y;
			if (z < 10 && y < 9)
			{
				printf("  %d,", z);
			}
			else if (z < 10 && y == 9)
			{
				printf("  %d", z);
			}
			else if (z >= 10 && y < 9)
			{
				printf(" %d,", z);
			}
			else if (z >= 10 && y == 9)
			{
				printf(" %d", z);
			}
			y++;
		}
		printf("\n");
		x++;

	}
}
