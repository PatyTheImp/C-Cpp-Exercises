/*
	Name: Exercício 8 alínea 8
	Copyright: 
	Author: Patrícia Costa
	Date: 02/11/20 12:22
	Description: 
*/


#include <stdio.h>
#include <locale.h>

void asteriscos()
{
	for (int i = 1; i <= 43; i++)
		printf("*");
	puts("");
}

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float notas[10], soma = 0, media;
	
	asteriscos();
	printf("* Cálculo da média das notas de 10 alunos *\n");
	asteriscos();
	puts("");
	
	for (int i = 0; i <= 9; i++)
	{
		printf("Insira o valor %d: ", i + 1);
		scanf("%f", &notas[i]);
		soma += notas[i];
	}
	
	media = soma / 10;
	
	printf("\nSendo a média das notas = %.2f\n\n", media);
	
	for (int i = 0; i <= 9; i++)
		printf("A nota %.2f - %.2f = %.2f\n", notas[i], media, notas[i] - media);
}

