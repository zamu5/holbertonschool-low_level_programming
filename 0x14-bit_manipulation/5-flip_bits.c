#include "holberton.h"
/**
 * flip_bits - how many bits would be fliped to convert a number to other one
 * @n: number 1
 * @m: number 2
 * Return: he number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int data1, data2, c;
	int cont = 0, i = 0;

	while (31 - i >= 0)
	{
		data1 = 1 << (31 - i) & n;
		data2 = 1 << (31 - i) & m;

		c = data1 ^ data2;
		if (c)
			cont++;
		i++;
	}
	return (cont);
}
