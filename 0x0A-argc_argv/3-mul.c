#include "holberton.h"
/**
 * main - print the addition of two numbers
 * @argc: declaration
 * @argv: declaration
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int x, y;
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		argc++;
	}
	else
		printf("Error\n");
}
