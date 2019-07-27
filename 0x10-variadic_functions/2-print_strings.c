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

	if (!separator)
		return;
	va_start(arguments, n);
	for (x = 0; x < (n - 1); x++)
	{
		word = va_arg(arguments, char*);
		if (!word)
		{
			printf("(nil)%s", separator);
			continue;
		}
		printf("%s%s", word, separator);
	}
	printf("%s\n", va_arg(arguments, char*));
	va_end(arguments);
}
