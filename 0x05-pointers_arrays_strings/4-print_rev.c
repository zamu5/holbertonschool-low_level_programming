#include "holberton.h"
/**
 * print_rev - check the code for Holberton School students.
 *@s: declaration
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int cont = 0, x = 0;

	while (s[x] != '\0')
	{
		cont++;
		x++;
	}
	while (cont >= 0)
	{
		_putchar(s[cont]);
		cont--;
	}
	_putchar('\n');
}
