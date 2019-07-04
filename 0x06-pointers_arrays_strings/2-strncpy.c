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
	int x, cont = 0;

	for (x = 0; src[x] != '\0' ; x++)
	{
		dest[x] = src[x];
		cont++;
	}
	for (x = cont ; x < n ; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
