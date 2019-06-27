#include "holberton.h"
/**
 * print_diagonal - % funtion
 *@n: declaration
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int x, y, space;

	for (x = n ; x >= 0 ; x--)
	{
		if (x != 0)
		{
			if (x != 1)
			{
				_putchar(92);
				_putchar('\n');
				space = space + 1;
				for (y = 0 ; y < space ; y++)
				{
					_putchar(32);
				}
			} else
			{
				_putchar(92);
			}
		} else
		{
		_putchar('\n');
		}
	}
	space = 0;
	if (n < 0)
	{
		_putchar('\n');
	}
}
