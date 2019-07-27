#ifndef VA
#define VA
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void pchar(va_list value);
void pint(va_list value);
void pfloat(va_list value);
void pstring(va_list value);
/**
 * struct format - return a pointer to function
 * @type: type of data
 * @ftype: pointer to function
 * Return: p tp f
 */
typedef struct format
{
	char *type;
	void (*ftype)();
} fmt;
#endif
