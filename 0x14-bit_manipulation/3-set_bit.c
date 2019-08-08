#include "holberton.h"
/**
 * set_bit - set a specific bit to 1
 * @n: pointer
 * @index: index to the specific bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	*n = mask << index | *n;
	return (1);
}
