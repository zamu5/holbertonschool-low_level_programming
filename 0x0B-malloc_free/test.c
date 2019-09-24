#include <stdio.h>

int main(void)
{

	char p1[5] = "hola";
	char z[5] = "casa";
	char *po[2];
	char *p;
	char *c;
	int x;
	int y;


	/* p = p1; */
        /* c = z; */
        po[0] = p1;
	po[1] = z;

	printf("%p\n", p1);
	printf("%p\n", p);
	printf("%c\n", *(p+2));
	printf("%s\n", po[0]);
	for(x=0; x< 2; x++)
	{
		for (y = 0; y < 5; y++)
		{
			printf("%c", *(*(po + x) + y));
		}
		printf("\n");
		}


	return 0;
}
