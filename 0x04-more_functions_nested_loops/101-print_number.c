#include "holberton.h"
#include <stdio.h>
/**
 * largo - % funtion
 *@x: declaration
 * Return: Always 0 (Success)
 */
int largo(int x)
{
	int cont = 1;

	while (x > 1)
	{
		x = x / 10;
		if (x > 0)
		{
			cont = cont + 1;
		}
	}
	return (cont);
}
#include "holberton.h"
/**
 * print_number - % funtion
 *@n: declaration
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int y, z, f, q, a = 1, s = 10;

	z = largo(n);
	if (n < 0)
	{
		n = n * -1;
	}
	for (q = 1 ; q < z ; q++)
	{
		s = s * a;
		a = 10;
	}
	printf("%d", a);
	for (y = 1 ; y <= z ; y++)
	{
		if (y != z)
		{

			f = n / s;
			_putchar(f + '0');
		}
		else
		{
			f = n % 10;
			_putchar(f + '0');
		}
		n = n % s;
		s = s / 10;
	}
}
