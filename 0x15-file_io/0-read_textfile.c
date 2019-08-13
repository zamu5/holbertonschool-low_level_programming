#include "holberton.h"
/**
 * read_textfile - read an spcific file like syscall cat
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of, rf, wf, cf;
	unsigned int cont = 0;
	char buf;

	if (filename == NULL)
		return (0);
	of = open(filename, O_RDWR);
	if (of == -1)
		return (0);
	do
	{
		rf = read(of, &buf, 1);
		if (rf == -1)
			return (0);
		wf = write(STDOUT_FILENO, &buf, 1);
		if (wf == -1)
			return (0);
		cont++;
	} while (rf != 0 && cont != letters);
	cf = close(of);
	if (cf == -1)
		return (0);
	return(cont);
}
