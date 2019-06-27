#include "holberton.h"
/**
 * is_digit - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        return (0);
}
