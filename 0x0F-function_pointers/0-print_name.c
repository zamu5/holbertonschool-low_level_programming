#include <stdio.h>
/**
 * print_name - Write a function that prints a name.
 * @name: the name to what to print
 * @f: pointer to the function
 * Return: value
 */*

void print_name(char *name, void (*f)(char *))
{
	 f(name);
}
