#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function of the calculator
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: result of the opration
 */

int main(int argc, char *argv[])
{
	int (*x)(int, int);
	int y;

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2 == '%']) && atoi(argv[3]) == 0)
	{
		printf("Error");
		exit(100);
	}
	x = get_op_func(argv[2]);
	if (x == NULL)
	{
		printf("Error");
		exit(99);
	}
	y = x(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", y);
}
