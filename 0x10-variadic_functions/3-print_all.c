#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * pstring - print a srting.
 * @value: parameters to be printed
 * Return: nothing
 */
void pstring(va_list value)
{
	printf("%s", va_arg(value, char*));
}
/**
 * pfloat - print a float.
 * @value: parameters to be printed
 * Return: nothing
 */
void pfloat(va_list value)
{
	printf("%f", va_arg(value, double));
}
/**
 * pint - print a int.
 * @value: parameters to be printed
 * Return: nothing
 */
void pint(va_list value)
{
	printf("%d", va_arg(value, int));
}
/**
 * pchar - print a char.
 * @value: parameters to be printed
 * Return: nothing
 */
void pchar(va_list value)
{
	printf("%c", va_arg(value, int));
}
/**
 * print_all - print all the  parameters.
 * @format: type of all parameters.
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int x = 0, y;

	va_start(arguments, format);

	fmt optiontype[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring}
	};

	while (format[x] != '\0' && format != NULL)
	{
		y = 0;
		while (y < 4)
		{
			if (*optiontype[y].type == format[x])
			{
				optiontype[y].ftype(arguments);
				if (format[x + 1] != '\0')
					printf(" ,");
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(arguments);
}
