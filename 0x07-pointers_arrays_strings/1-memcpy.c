#include "holberton.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x, y;

	y = n;
	for (x = 0 ; x < y ; x++)
	{
		*(dest + x) = *(src + x);
	}
	return (dest);
}
