#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome[100];
	int comprimento;
	
	printf("Insira uma string: ");
	gets(nome);
	
	comprimento = strlen(nome);
	printf("N�mero de caracteres = %d", comprimento);
}

