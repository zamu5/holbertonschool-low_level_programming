#include "holberton.h"
/**
 * get_bit - found a specific bit
 * @n: the data number
 * @index: the bit to found
 * Return: e value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, c;

	if (index > 63)
		return (-1);
	c = mask << index & n;
	if (c)
		return (1);
	else
		return (0);
	return (-1);
}
