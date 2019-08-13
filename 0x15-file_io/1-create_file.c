#include "holberton.h"
/**
 * create_file - create a new file
 * @filename: the name of the file
 * @text_content: is a NULL
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int nf, wf, cont = 0;

	if (filename == NULL)
		return (-1);
	nf = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (nf == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[cont] != '\0')
		cont++;
	wf = write(nf, text_content, cont);
	if (wf == -1 || wf != cont)
		return (-1);
	close(nf);
	return (1);
}
