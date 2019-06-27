#include "holberton.h"

/**
 * print_times_table - prints the table of nine
 *@n : declaration
 * Returns nothing
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n > 0 && n < 15)
	{
	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			z = y * x;
			if (z == 0)
			{
				if (x != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0');
			} else if (z <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((z % 10) + '0');
			} else if (z > 9 && z <= 99)
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			} else
			{
				_putchar((z / 100) + '0');
				_putchar(((z / 10) % 10) + '0');
				_putchar((z % 10) + '0');
			}
			if (x != n)
			{
				_putchar(',');
				_putchar(' ');
			}}
		_putchar('\n');
	}}}
