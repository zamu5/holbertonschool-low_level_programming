#include "holberton.h"
/**
 * puts_half - print the second half of a number.
 *@str: declaration
 * Return: nothing.
 */
void puts_half(char *str)
{
	int cont = 0, x = 0, j;

	while (str[x] != '\0')
	{
		cont++;
		x++;
	}
	if ((cont % 2) != 0)
	{
		cont = cont - 1;
	}
	for (j = cont / 2 ; j != cont ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
