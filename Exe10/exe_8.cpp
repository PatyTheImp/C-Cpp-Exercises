#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	struct Dados
	{
		char nome[50];
		char apelido[50];
		int tlm;
	};
	
	Dados pessoa[4];
	
	for (int i = 0; i < 4; i++)
	{
		printf("Insira o seu primeiro nome: ");
		scanf("%s", pessoa[i].nome);
		printf("Insira o seu apelido: ");
		scanf("%s", pessoa[i].apelido);
		strcat(pessoa[i].nome, " ");
		strcat(pessoa[i].nome, pessoa[i].apelido);
		printf("Insira o seu número de tlm: ");
		scanf("%d", &pessoa[i].tlm);
		puts("");
	}
	
	puts("");
	
	for (int i = 0; i < 4; i++)
	{
		printf("Nome completo: %s (o seu nome tem %d caracteres)\tTlm:%d\n", pessoa[i].nome, strlen(pessoa[i].nome), pessoa[i].tlm);
	}
}




























