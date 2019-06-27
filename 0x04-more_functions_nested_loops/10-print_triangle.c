#include "holberton.h"
/**
 * print_triangle - % funtion
 *@size: declaration
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int y, z, c, h, s;


	z = size - 1;
	h = 1;
	if (size > 0)
	{
		for (y = 1 ; y <= size ; y++)
		{
			for (c = 1 ; c <= z ; c++)
			{
				_putchar(32);
			}
			for (s = 1 ; s <= h ; s++)
			{
				_putchar(35);
			}
			_putchar('\n');
			z--;
			h++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
