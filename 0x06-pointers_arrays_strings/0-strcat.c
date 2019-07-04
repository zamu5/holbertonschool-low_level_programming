#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 *@dest: declaration
 *@src: declaration
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int contd = 0, n, conts = 0, x = 0;

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
	n = contd + conts;
	for (x = 0 ; x < conts ; x++)
	{
		*(dest + contd) = *(src + x);
		contd++;
	}
	dest[n] = '\0';
	return (dest);
}
