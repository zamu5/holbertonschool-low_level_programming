#include "holberton.h"
/**
 * print_line - % funtion
 *@n: declaration
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int x;

	for (x = n ; x >= 0 ; x--)
	{
		if (x != 0)
		{
			_putchar(95);
		} else
		{
			_putchar('\n');
		}
	}
	if (n < 0)
	{
		_putchar('\n');
	}


}
