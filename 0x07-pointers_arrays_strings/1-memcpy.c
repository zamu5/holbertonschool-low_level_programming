#include "holberton.h"
/**
 * _memcpy - Write a function that copies memory area
 * @src: declaration
 * @dest: declaration
 * @n: declaration
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
