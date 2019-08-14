#include "holberton.h"
#include <stdio.h>
/**
 * main - copy a file
 * @ac: the number of arguments
 * @av: arguments
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("usage: %s elf_filename\n", argv[0]); exit(98);
	}
	if (argv[1] == NULL)
	{
		write(STDERR_FILENO, "NULL filename", 13);
		exit(98);
	}
}
