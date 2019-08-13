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
	char buf[letters];

	if (filename == NULL)
		return (0);
	of = open(filename, O_RDONLY);
	if (of == -1)
		return (0);
	rf = read(of, buf, letters);
	if (rf == -1)
		return (0);
	wf = write(STDOUT_FILENO, buf, rf);
	if (wf == -1)
		return (0);
	cf = close(of);
	if (cf == -1)
		return (0);
	return(wf);
}
