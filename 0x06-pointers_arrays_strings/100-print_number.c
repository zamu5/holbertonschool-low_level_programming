#include "holberton.h"

/**
 * print_number - check the code for Holberton School students.
 *@n: declaration
 * Return: Always 0.
 */
void print_number(int n)
{
	int x, c = 1, cont = 1, z;

	if (n < 0)
	{
		_putchar(45);
	}
	n = n > 0 ? n : n * -1;
	z = n;
	while (n > 9)
		{
		n = n / 10;
		cont++;
		}
	for (x = 1 ; x < cont ; x++)
	{
		c = c * 10;
	}
	for (x = 0 ; x < cont ; x++)
	{
		if (z > 9)
			_putchar((z / c) + '0');
		else
		{
			_putchar((z % 10) + '0');
		}
		z = z % c;
		c = c / 10;
	}


}
