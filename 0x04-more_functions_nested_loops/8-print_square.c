#include "holberton.h"
/**
 * print_square - % funtion
 *@size: declaration
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
	for (x = 1 ; x <= size ; x++)
	{
		for (y = 1 ; y <= size ; y++)
		{
			if (y != size)
			{
				_putchar(35);
			} else
			{
				_putchar(35);
				_putchar('\n');
			}

		}
	}
	}
	else
	{
		_putchar('\n');
	}
}
