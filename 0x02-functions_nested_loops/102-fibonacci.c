#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int ult = 1, penul = 0, sum = 0, cont;

	for (cont = 0 ; cont <= 50 ; cont++)
	{
		sum = ult + penul;
		printf("%ld, ", sum);
		penul = ult;
		ult = sum;
	}
	printf("\n");
}
