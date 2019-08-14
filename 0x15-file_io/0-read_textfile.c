#include "holberton.h"
/**
 * read_textfile - read an spcific file like syscall cat
 * @filename: the file to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of = 0, rf, wf = 0;
	unsigned int cont = 0;
	char buf;

	if (filename == NULL)
		return (0);
	of = open(filename, O_RDWR);
	if (of == -1)
		return (0);
	rf = read(of, &buf, 1);
	if (rf == -1)
		return (0);
	while (rf != 0 && cont != letters)
	{
		wf = write(1, &buf, 1);
		if (wf == -1)
			return (0);
		rf = read(of, &buf, 1);
		if (rf == -1)
			return (0);
		cont++;
	}
	rf = close(of);
	if (rf == -1)
		return (0);
	return (cont);
}
