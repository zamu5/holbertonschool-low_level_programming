#include "holberton.h"
/**
 * main - print the addition of two numbers
 * @argc: declaration
 * @argv: declaration
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int x, y, m;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		m = x * y;
		printf("%d\n", m);
		argc++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
