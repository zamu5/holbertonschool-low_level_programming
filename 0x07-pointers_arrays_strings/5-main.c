#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello  world";
    char *f = "";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    printf("%s\n", strstr(s, f));
    return (0);
}
