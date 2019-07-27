#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: number of parameters.
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int sum = 0, x;

	if (n == 0)
		return (0);
	va_start(arguments, n);
	for (x = 0; x < n; x++)
		sum = sum + va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}
