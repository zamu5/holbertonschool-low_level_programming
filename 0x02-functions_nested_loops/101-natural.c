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

	x = 1024 / 3;
	printf("%d\n", x);
	y = 1024 / 5;
	printf("%d\n", y);
	for (z = 0 ; z <= x ; z++)
	{
		suma3 = suma3 + (z * 3);
	}
	for (c = 0 ; c <= y ; c++)
	{
		suma5 = suma5 + (c * 5);
	}
	printf("%d\n", suma3);
	printf("%d\n", suma5);
	sumatotal = suma3 + suma5;
	printf("%d\n", sumatotal);
}
