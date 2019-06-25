#include "holberton.h"
/**
 * _isalpha - prints the alphabet in lowercase
 * @c: is lower
 * Return: 0 if compilation is succesfully
 */
int _isalpha(int c)
{
  if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
