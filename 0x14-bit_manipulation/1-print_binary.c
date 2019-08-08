#include "holberton.h"
/**
 * print_binary - convert decimal to binary
 * @n: decimal number
 * Return: binary convertion
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, c;
	int i = 0, flag = 0;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	while (i < 32)
	{
		c = mask << (31 - i) & n;
		if (c)
			flag = 1;
		if (flag)
		{
			if (c)
				_putchar(49);
			else
				_putchar(48);
		}
		i++;
	}
}
