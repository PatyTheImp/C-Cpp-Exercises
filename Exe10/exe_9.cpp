#include <stdio.h>
#include <locale.h>

const int nr_filmes = 3;

struct Filme
{
	char nome[50];
	char ano[5];
};

Filme filmes[nr_filmes];

void perguntas(int indice);

main()
{
	setlocale(LC_ALL, "portuguese");
	
	for (int i = 0; i < nr_filmes; i++)
		perguntas(i);
	
	printf("\nOs filmes inseridos foram:\n");
		
	for (int j = nr_filmes; j < nr_filmes * 2; j++)
		perguntas(j);
}

void perguntas(int indice)
{
	if (indice < nr_filmes)
	{
		printf("Nome do filme: ");
		gets(filmes[indice].nome);
		printf("Ano de realização: ");
		gets(filmes[indice].ano);
		puts("");
	}
	else
		printf("%s (%s)\n", filmes[indice - nr_filmes].nome, filmes[indice - nr_filmes].ano);
}







































