#include "holberton.h"
#include "limits.h"
/**
 * _pow - a pow b
 * @a: data
 * @b: pow
 * Return:the result
 */
int _pow(int a, int b)
{
	int i, sum = 1;

	for (i = 0; i < b; i++)
	{
		sum = sum * a;
	}
	return (sum);
}
/**
 * binary_to_uint - convert a binary to decimal
 * @b: string in binary
 * Return:the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned long int data = 0, d;
	unsigned long int flag = 0, len, len1, i;

	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != 48 && b[len] != 49)
			flag = 1;
	}
	if (flag)
		return (0);
	flag = 0;
	len1 = len - 1;
	for (i = 0; b[i] != '\0'; i++, len1--)
	{
		if (b[i] == 49)
		{
			d = _pow(2, len1);
			data = data + d;
		}
	}
	return (data);
}
