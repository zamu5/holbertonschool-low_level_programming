#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z, c;
	int  suma3 = 0, suma5 = 0, sumatotal = 0;

	x = 1023 / 3;
	y = 1023 / 5;
	for (z = 0 ; z <= x ; z++)
	{
		suma3 = suma3 + (z * 3);
	}
	for (c = 0 ; c <= y ; c++)
	{
		suma5 = suma5 + (c * 5);
	}
	sumatotal = suma3 + suma5;
	printf("%d\n", sumatotal);
}
