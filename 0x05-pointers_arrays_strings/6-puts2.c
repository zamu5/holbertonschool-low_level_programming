#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ;x = x + 2)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
