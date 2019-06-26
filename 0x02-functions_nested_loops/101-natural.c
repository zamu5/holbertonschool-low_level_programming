#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, c;
	long int  suma3, suma5, sumatotal;

	x = 1024 / 3;
	y = 1024 / 5;
	for (z = 0 ; z <= x ; z++)
	{
		suma3 = suma3 + (z * 3);
	}
	for (c = 0 ; c <= y ; c++)
	{
		suma5 = suma5 + (c * 5);
	}
	sumatotal = suma3 + suma5;
	printf("%ld\n", sumatotal);
}
