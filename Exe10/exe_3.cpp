#include <stdio.h>
#include <locale.h>
#include <string.h>

const int nr_individuos = 5;

main()
{
	setlocale(LC_ALL, "portuguese");
	
	typedef struct Dados
	{
		char nome[60];
		char morada[60];
		int telefone;
	};
	
	Dados individuo[nr_individuos];
	
	for (int i = 0; i < nr_individuos; i++)
	{
		printf("Digite seu Nome: ");
		gets(individuo[i].nome);
		printf("Digite seu Endere�o: ");
		gets(individuo[i].morada);
		printf("Digite seu Telefone: ");
		scanf("%d", &individuo[i].telefone);
		puts("");
		fflush(stdin);
	}
	
	for (int i = 0; i < nr_individuos; i++)
	{
		printf("Indiv�duo %d:\n", i + 1);
		printf("Nome: %s\n", individuo[i].nome);
		printf("Endere�o: %s\n", individuo[i].morada);
		printf("Telefone: %d\n\n", individuo[i].telefone);
	}
}

























