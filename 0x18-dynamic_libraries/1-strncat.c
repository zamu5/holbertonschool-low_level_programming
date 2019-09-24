#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 *@dest: declaration
 *@src: declaration
 *@n: declaration
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int contd = 0, z, conts = 0, x = 0;

	while (dest[x] != '\0')
	{
		contd++;
		x++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		conts++;
		x++;
	}
	z = contd + conts;
	for (x = 0 ; x < n ; x++)
	{
		*(dest + contd) = *(src + x);
		contd++;
	}
	dest[z] = '\0';
	return (dest);
}
