#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: a pointer shall to a nerwly
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	void *p = NULL;
	char *s;
	unsigned int x, c, strlen1 = 0, strlen2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[strlen1] != '\0' ; strlen1++)
		;
	for (; s2[strlen2] != '\0' ; strlen2++)
		;
	if (n > strlen2)
		n = strlen2;
	p = malloc(sizeof(char) * (strlen1 + n));
	if (p == 0)
		return (p);
	s = (char *)p;
	for (x = 0; x < strlen1; x++)
		s[x] = s1[x];
	for (c = 0 ; c < n ; c++, x++)
		s[x] = s2[c];
	s[x] = '\0';
	return (s);
}
