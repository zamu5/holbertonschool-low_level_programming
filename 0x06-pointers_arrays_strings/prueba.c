#include <stdio.h>

int main(void)
{
	int a[]= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	printf("%d\n", sizeof(a) / sizeof(int));
	printf("%d", sizeof(int));
	return (0);
}
