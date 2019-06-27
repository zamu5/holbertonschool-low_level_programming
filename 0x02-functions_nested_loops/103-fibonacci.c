#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int ult = 1, penul = 0, sum = 0, even = 0;

	for (sum = 0 ; sum < 4000000 ; sum = ult + penul)
	{
		if ((sum % 2) == 0)
		{
			even = even + sum;
		}
		penul = ult;
		ult = sum;
	}
	printf("%ld", even);
	printf("\n");
	return (0);
}
