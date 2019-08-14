#include <stdio.h>
#include "holberton.h"
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
	int ff, ft, rff, ctf, cf;
	char buf[1024];

	if (ac != 3)
		printerror(97, av[1]);
	if (av[1] == NULL)
		printerror(98, av[1]);
	if (av[2] == NULL)
		printerror(99, av[2]);
	ff = open(av[1], O_RDONLY);
	rff = read(ff, buf, 1024);
	if (rff == -1)
		printerror(98, av[1]);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while (rff != 0)
	{
		ctf = write(ft, buf, rff);
		if (ctf == -1)
			printerror(99, av[2]);
		rff = read(ff, buf, 1024);
		if (rff == -1)
			printerror(98, av[1]);
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
