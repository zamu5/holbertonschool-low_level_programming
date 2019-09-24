#include "holberton.h"
/**
 * _strncpy - check the code for Holberton School students.
 *@dest: declaration
 *@src: declaration
 *@n: declaration
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, cont = 0;

	while (src[x] != '\0')
	{
		cont++;
		x++;
	}
	for (x = 0; x < n ; x++)
	{
		dest[x] = src[x];
	}
	for (x = cont ; x < n ; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
