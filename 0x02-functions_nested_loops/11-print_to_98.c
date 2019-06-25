#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - a function that prints the 9 times table, starting with 0.
 *@n: declaration
 * Return: 0 if compilation is succesfully
 */
void print_to_98(int n)
{
	if (n >= 98)
	{

		while  (n >= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d\n", n);
			}
			n--;

		}
	}
	else
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%d, ", n);

			}
			else
			{
				printf("%d\n", n);

			}
			n++;
		}
	}
}
