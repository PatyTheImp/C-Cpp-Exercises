#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n = 0;
	
	printf("Insira números FORA DO INTERVALO de 1 a 100\n");
	printf("   (digitando dentro do intervalo sai)\n\n");
	
	while (n <= 1 || n >= 100)
	{
		printf("Insira um número : "); 
		scanf("%d", &n);
	}
	
	printf("\nFoi inserido o número: %d\n", n);
	printf("Vai sair...");
}

