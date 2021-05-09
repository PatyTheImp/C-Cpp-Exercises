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
		
		printf("Insira o número de formandos: ");
		scanf("%d", &nr_formandos);
		
		for (int i = 1; i <= nr_formandos; i++)
		{
			printf("Insira a nota do %dº estudante: ", i);
			scanf("%f", &notas[i - 1]);
			while (notas[i - 1] < 0 || notas[i - 1] > 20) //Proteção para não se inserir notas fora da escala
			{
				printf("Nota inválida. Introduza uma nota na escala de 0 a 20 valores.\n");
				printf("Insira a nota do %dº estudante: ", i);
				scanf("%f", &notas[i - 1]);
			}
			soma += notas[i - 1];
		}
		
		printf("\n\nA soma das notas é %g.", soma);
		printf("\nA média das notas é %g valores.", soma / nr_formandos);
		printf("\n\nDeseja sair? Se sim prima 's'.");
		op = getch();
		
		soma = 0; //Para refazer o somatório
	}
	
	printf("\n\nFim de Programa.");
}

