/*
	Name: Exercício 10 alínea 4a
	Copyright: 
	Author: Patrícia Costa
	Date: 07/12/20 11:49
	Description: Estruturas
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int op;
	
	typedef struct Dados
	{
		int nr_jogador;
		int idade;
		int altura;
		int peso;
	};
	
	Dados jogador_1 = {1, 20, 180, 90};
	Dados jogador_2 = {2, 22, 175, 80};
	
	do
	{
		printf("Qual o jogador que deseja ver? [1, 2, 0 - sair] :");
		scanf("%d", &op);
		
		switch (op)
		{
			case 1:
				printf("\nNúmero de jogador: %d\nIdade: %d\nAltura (cm): %d\nPeso (kg): %d\n\n",
				jogador_1.nr_jogador, jogador_1.idade, jogador_1.altura, jogador_1.peso);
				break;
				
			case 2:
				printf("\nNúmero de jogador: %d\nIdade: %d\nAltura (cm): %d\nPeso (kg): %d\n",
				jogador_2.nr_jogador, jogador_2.idade, jogador_2.altura, jogador_2.peso);
				break;
				
			case 0:
				break;
				
			default:
				printf("\nOpção inválida!\n");
		}	
	}
	while (op != 0);
	
	printf(":F i m  d o  p r o g r a m a:");
}


































