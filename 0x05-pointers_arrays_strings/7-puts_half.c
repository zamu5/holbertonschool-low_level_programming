#include "holberton.h"
/**
 * puts_half - print the second half of a number.
 *@str: declaration
 * Return: nothing.
 */
void puts_half(char *str)
{
	int cont = 0, x = 0, j, n = 0;

	while (str[x] != '\0')
	{
		cont++;
		x++;
	}
	if ((cont % 2) != 0)
	{
		n = (cont - 1);
	}
	else {
		n = cont;
	}
	for (j = n / 2 ; str[j] != '\0' ; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
