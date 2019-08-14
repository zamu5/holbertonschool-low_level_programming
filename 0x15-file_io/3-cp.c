#include "holberton.h"
#include <stdio.h>
/**
 * main - copies a file
 *
 * @argc: argument cont
 * @argv: arguments
 * Return: Returns 97 for syntax error, 98 for read error, 99 write, 100 close
 */
int main(int argc, char *argv[])
{
	int ff, ft, r, e = 1;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", argv[2]),
			exit(99);
	ff = open(argv[1], O_RDONLY);
	ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	r = read(ff, buf, 1024);
	if (r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (r != 0)
	{
		e = write(ft, buf, r);
		if (e == -1 || e != r)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		r = read(ff, buf, 1024);
		if (r == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
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
