#include <stdio.h>
/**
 * main - Patience
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48 ; x <= 57 ; x++)
	{
		for (y = 48 ; y <= 57 ; y++)
		{
			for (z = 0 ; z <= 57 ; z++)
			{
				if (x < y && y < z)
				{
				putchar(x);
				putchar(y);
				putchar(z);
					if (x != 55 || y != 56 || z != 57)
					{
					putchar(44);
					putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
