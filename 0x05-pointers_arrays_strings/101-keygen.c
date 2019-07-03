#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y, checksum;

	srand(time(NULL));

	for (x = 0, checksum = 2772; checksum > 122; x++)
	{
		y = (rand() % 100);
		printf("%c", y);
		checksum -= y;
	}
	printf("%c", checksum);
	return (0);
}
