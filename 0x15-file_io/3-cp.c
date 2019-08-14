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
	int ff, ft, readval, retval;
	char buf[1024];

	retval = 1;
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
	readval = read(ff, buf, 1024);
	if (readval == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (readval != 0)
	{
		retval = write(ft, buf, readval);
		if (retval == -1 || retval != readval)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		readval = read(ff, buf, 1024);
		if (readval == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	retval = close(ff);
	if (retval == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff), exit(100);
	retval = close(ft);
	if (retval == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft), exit(100);
	return (0);
}
