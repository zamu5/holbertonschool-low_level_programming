#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings.
 * @n: number of parameters.
 * @separator: space
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;
	char *word;

	va_start(arguments, n);
	for (x = 0; x < n; x++)
	{
		word = va_arg(arguments, char*);
		if (word == NULL)
			word = "(nil)";
		if (separator == NULL && x < (n - 1))
			printf("%s", word);
		else if (x < (n - 1))
			printf("%s%s", word, separator);
	}
	printf("%s\n", word);
	va_end(arguments);
}
