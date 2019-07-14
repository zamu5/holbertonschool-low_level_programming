#include "holberton.h"
/**
 * main - adding numbers
 * @argc: declaration
 * @argv: declaration
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, n, len;
	char comp[] = "0123456789";

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = strspn(argv[i], comp);
			len = strlen(argv[i]);
			if (n - len != 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				n = atoi(argv[i]);
				sum = sum + n;
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
