#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - how many bits would be fliped to convert a number to other one
 * @n: number 1
 * @m: number 2
 * Return: he number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int data = 0, c;
	int cont = 0, i = 0;

	data = n ^ m;
	while (31 - i >= 0)
	{
		c = data & 1 << (31 - i);
		if (c)
			cont++;
		i++;
	}
	return (cont);
}
