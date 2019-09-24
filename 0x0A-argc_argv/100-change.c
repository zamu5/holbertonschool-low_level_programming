#include "holberton.h"
/**
 * main - return change.
 * @argc: declaration
 * @argv: declaration
 * Return: 0 and 1
 */
int main(int argc, char *argv[])
{
	int x25, x10, x5, x2, x1, valor, monedas;

	if (argc == 2)
	{
		valor = atoi(argv[1]);
		if (valor >= 0)
		{
			x25 = valor / 25;
			valor = valor - (x25 * 25);
			x10 = valor / 10;
			valor = valor - (x10 * 10);
			x5 = valor / 5;
			valor = valor - (x5 * 5);
			x2 = valor / 2;
			valor = valor - (x2 * 2);
			x1 = valor / 1;
			valor = valor - (x1 * 1);
			monedas = x25 + x10 + x5 + x2 + x1;
			printf("%d\n", monedas);
		}
		else
			printf("0\n");
	}
	else
		printf("Error\n");
	return (0);
}
