#include <stdio.h>
#include <conio.h>

void caixa(int comp)
{
	for (int i = 1; i <= comp; i++)
		printf("*");
	puts("");
	printf("*");
	if (comp != 1)
	{
		for (int i = 1; i <= comp - 2; i++)
			printf(" ");
		printf("*");
	}
	puts("");
	
	for (int i = 1; i <= comp; i++)
		printf("*");
	puts("");
}

main()
{
	int comp;
	
	printf("Qual o comprimento da caixa? ");
	scanf("%d", &comp);
	
	caixa(comp);
	
	printf("\nPrima qualquer tecla para continuar...");
	getch();
}

