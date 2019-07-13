#include "holberton.h"
/**
 * main - print all the arguments
 * @argc: declaration
 * @argv: declaration
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
