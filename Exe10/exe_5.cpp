#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	struct Livro
	{
		char titulo[50];
		char autor[50];
		char assunto[50];
		int id;
	};
	
	Livro damas;
	
	strcpy(damas.titulo, "Linguagem C");
	strcpy(damas.autor, "Luis Damas");
	strcpy(damas.assunto, "Programação em C");
	damas.id = 82344544;
	
	printf("Título do livro: %s\n", damas.titulo);
	printf("Autor do livro: %s\n", damas.autor);
	printf("Assunto do livro: %s\n", damas.assunto);
	printf("ID do livro: %d\n", damas.id);
}

