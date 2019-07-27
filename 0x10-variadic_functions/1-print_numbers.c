#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of parameters.
 * @separator: an space between words
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int x;

	if (n == 0)
		return;
	va_start(arguments, n);
	for (x = 0; x < (n - 1); x++)
	{
		if (separator == NULL)
			printf("%d", va_arg(arguments, int));
		else
			printf("%d%s", va_arg(arguments, int), separator);
	}
	printf("%d\n", va_arg(arguments, int));
	va_end(arguments);
}
