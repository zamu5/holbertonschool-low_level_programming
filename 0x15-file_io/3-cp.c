#include <stdio.h>
#include "holberton.h"
/**
 * main - copy a file
 * @ac: the number of arguments
 * @ag: arguments
 * Return: nothing
 */
int main (int ac, char *av[])
{
	int ff, ft, rff, ctf, cf;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (av[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", av[2]);
		exit(99);
	}
	ff = open(av[1], O_RDONLY);
	rff = read(ff, buf, 1024);
	if (rff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ft = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	while (rff != 0)
	{
		ctf = write(ft, buf, rff);
		if (ctf == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		rff = read(ff, buf, 1024);
		if (rff == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
	}
	cf = close(ff);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	cf = close(ft);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (0);

}
