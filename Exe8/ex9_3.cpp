#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome[100];
	
	printf("Insira uma string: ");
	gets(nome);
	
	printf("O n�mero de caracteres na string �: %d", strlen(nome));
}

