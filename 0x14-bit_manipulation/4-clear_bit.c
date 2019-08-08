#include "holberton.h"
/**
 * clear_bit - set a specific bit to 0
 * @n: pointer
 * @index: index to the specific bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);
	*n = ~(~*n | mask << index);
	return (1);
}
