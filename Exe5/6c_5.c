#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int n = 0;
	
	printf("Insira n�meros FORA DO INTERVALO de 1 a 100\n");
	printf("   (digitando dentro do intervalo sai)\n\n");
	
	while (n <= 1 || n >= 100)
	{
		printf("Insira um n�mero : "); 
		scanf("%d", &n);
	}
	
	printf("\nFoi inserido o n�mero: %d\n", n);
	printf("Vai sair...");
}

