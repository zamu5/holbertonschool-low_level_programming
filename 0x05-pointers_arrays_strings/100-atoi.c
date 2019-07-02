#include "holberton.h"
/**
 * _atoi - conert string to int.
 *@s: declaration
 * Return: Always 0 when it dont have numbers.
 */
int _atoi(char *s)
{
	int x, y = 0, cont = 0, sig = 0, ne = 0;

	for (x = 0 ; !(s[x] > 47 && s[x] < 58) ; x++)
	{
		ne = (s[x] == '-') ? ne + 1 : ne;
		cont++;
	}
	sig = (ne % 2 == 0) ? 1 : -1;
	for (x = cont ; s[x] > 47 && s[x] < 58 ; x++)
	{
		y = y * 10;
		y = y + (*(s + x) - 48);
	}
	return (y * sig);
}
