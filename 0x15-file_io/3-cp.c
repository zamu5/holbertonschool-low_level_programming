#include "holberton.h"
#include <stdio.h>
/**
 * printerror - printerror
 * @n: error
 * @p: string
 * Return: nothing
 */
void printerror(int n, char *p)
{
	if (n == 97)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (n == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", p);
		exit(98);
	}
	if (n == 99)
	{
		dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", p);
		exit(99);
	}
}
/**
 * main - copy a file
 * @ac: the number of arguments
 * @av: arguments
 * Return: nothing
 */
int main(int ac, char *av[])
{
	int ff, ft, r, e = 1;
	char buf[1024];

	if (ac != 3)
		printerror(97, av[1]);
	if (av[1] == NULL)
		printerror(98, av[1]);
	if (av[2] == NULL)
		printerror(99, av[2]);
	ff = open(av[1], O_RDONLY);
	ft = open(av[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	r = read(ff, buf, 1024);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);
	while (r != 0)
	{
		e = write(ft, buf, r);
		if (e == -1 || e != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		r = read(ff, buf, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
				exit(98);
	}
	e = close(ff);
	if (e == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	e = close(ft);
	if (e == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	return (0);
}
