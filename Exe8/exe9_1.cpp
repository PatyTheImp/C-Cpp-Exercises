#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char primeiro_nome[100], ultimo_nome[100];
	
	printf("Insira o seu primeiro nome: ");
	gets(primeiro_nome);
	printf("Insira o seu �ltimo nome: ");
	gets(ultimo_nome);
	
	printf("O teu nome �: %s", strcat(strcat(primeiro_nome, " "), ultimo_nome));
}

