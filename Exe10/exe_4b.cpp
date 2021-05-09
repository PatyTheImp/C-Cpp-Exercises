/*
	Name: Exercício 10 alínea 4b
	Copyright: 
	Author: Patrícia Costa
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
		printf("Insira o %dº número: ", i + 1);
		scanf("%d", &jogador[i].nr_jogador);
		printf("Insira o %dº nome: ", i + 1);
		scanf("%s", jogador[i].nome);
		printf("Insira o %dº idade: ", i + 1);
		scanf("%d", &jogador[i].idade);
		printf("Insira o %dº altura: ", i + 1);
		scanf("%d", &jogador[i].altura);
		printf("Insira o %dº peso: ", i + 1);
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
			printf("Não encontrado\n\n");
		else
		{
			printf("\nNúmero de jogador: %d\nNome: %s\nIdade: %d\nAltura (cm): %d\nPeso (kg): %d\n\n",
			jogador[j].nr_jogador, jogador[j].nome, jogador[j].idade, jogador[j].altura, jogador[j].peso);
			break;
		}
	}
	
	printf("Obrigado por usar este programa!");
}

































