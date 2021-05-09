#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char op = ' ';
	int nr_formandos;
	float notas[100], soma = 0;
	
	while (op != 's' && op != 'S') 
	{
		system("cls");
		
		printf("Insira o n�mero de formandos: ");
		scanf("%d", &nr_formandos);
		
		for (int i = 1; i <= nr_formandos; i++)
		{
			printf("Insira a nota do %d� estudante: ", i);
			scanf("%f", &notas[i - 1]);
			while (notas[i - 1] < 0 || notas[i - 1] > 20) //Prote��o para n�o se inserir notas fora da escala
			{
				printf("Nota inv�lida. Introduza uma nota na escala de 0 a 20 valores.\n");
				printf("Insira a nota do %d� estudante: ", i);
				scanf("%f", &notas[i - 1]);
			}
			soma += notas[i - 1];
		}
		
		printf("\n\nA soma das notas � %g.", soma);
		printf("\nA m�dia das notas � %g valores.", soma / nr_formandos);
		printf("\n\nDeseja sair? Se sim prima 's'.");
		op = getch();
		
		soma = 0; //Para refazer o somat�rio
	}
	
	printf("\n\nFim de Programa.");
}

