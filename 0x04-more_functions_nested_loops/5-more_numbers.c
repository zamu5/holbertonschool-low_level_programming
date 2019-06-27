#include "holberton.h"
/**
 * imprimir - % print funtion
 *@n: declaration
 * Return: Always 0 (Success)
 */
int imprimir(int n)
{
	return (_putchar(n + '0'));
}
/**
 * more_numbers - % funtion
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int x = 0, y, d, u;

	while (x < 10)
	{
		for (y = 0 ; y < 15 ; y++)
		{
			if (y < 10)
			{
				imprimir(y);
			}
			else
			{
				d = y / 10;
				u = y % 10;
				imprimir(d);
				imprimir(u);
			}
		}
		_putchar('\n');
		x++;
	}
}
