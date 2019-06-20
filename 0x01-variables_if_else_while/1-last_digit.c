#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - % funtion
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
	printf("Last digit of %1d is greater than 5\n", n);
	}
	else if (x == 0)
	{
	printf("Last digit of %1d is 0\n", n);
	}
	else
	{
	printf("Last digit of %1d is less tahn 6 and not 0\n", n);
	}
	return (0);
}
