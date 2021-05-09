/*
	Name: Exerc�cio 10 al�nea 4b
	Copyright: 
	Author: Patr�cia Costa
	Date: 07/12/20 11:49
	Description: Estruturas
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int pessoas, j;
	char nome_procura[60];
	
	struct Dados
	{
		int nr_jogador;
		char nome[60];
		int idade;
		int altura;
		int peso;
	};
	
	Dados jogador[100];
	
	printf("Quantos registos deseja inserir? ");
	scanf("%d", &pessoas);
	
	printf("Insira os dados relativos a %d pessoas.\n\n", pessoas);
	
	for (int i = 0; i < pessoas; i++)
	{
		printf("Insira o %d� n�mero: ", i + 1);
		scanf("%d", &jogador[i].nr_jogador);
		printf("Insira o %d� nome: ", i + 1);
		scanf("%s", jogador[i].nome);
		printf("Insira o %d� idade: ", i + 1);
		scanf("%d", &jogador[i].idade);
		printf("Insira o %d� altura: ", i + 1);
		scanf("%d", &jogador[i].altura);
		printf("Insira o %d� peso: ", i + 1);
		scanf("%d", &jogador[i].peso);
		puts("");
	}
	
	while (true)
	{
		printf("Qual o nome que pretende procurar? R: ");
		scanf("%s", nome_procura);
		
		for (j = 0; j < pessoas; j++)
		{
			if (strcmp(jogador[j].nome, nome_procura) == 0)
				break;
		}
		
		if (j == pessoas)
			printf("N�o encontrado\n\n");
		else
		{
			printf("\nN�mero de jogador: %d\nNome: %s\nIdade: %d\nAltura (cm): %d\nPeso (kg): %d\n\n",
			jogador[j].nr_jogador, jogador[j].nome, jogador[j].idade, jogador[j].altura, jogador[j].peso);
			break;
		}
	}
	
	printf("Obrigado por usar este programa!");
}

































