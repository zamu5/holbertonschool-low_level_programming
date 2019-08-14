#include "holberton.h"
/**
 * append_text_to_file - add text to the end of a file
 * @filename: file
 * @text_content: text to add
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of, wf, cont = 0;

	if (filename == NULL)
		return (-1);
	of = open(filename, O_WRONLY | O_APPEND);
	if (of == -1)
		return (of);
	if (text_content == NULL)
		return (1);
	while (text_content[cont] != '\0')
		cont++;
	wf = write(of, text_content, cont);
	if (wf == -1)
		return (wf);
	return (1);
}
