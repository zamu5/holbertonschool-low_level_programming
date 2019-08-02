#include <stdio.h>
void first_this(void) __attribute__ ((constructor));
/**
 * first_this - print first this
 *
 * Return: Nothing
 */
void first_this(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
