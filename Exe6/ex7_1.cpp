#include <stdio.h>


void caixa()
{
	for (int i = 1; i <= 10; i++)
		printf("*");
		
	puts("");
	
	for (int i = 1; i <= 10; i++)
		printf("*        *\n");
		
	for (int i = 1; i<= 10; i++)
		printf("*");
}

main()
{
	caixa();
}

