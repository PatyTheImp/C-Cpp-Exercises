#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome[100];
	
	printf("Insira uma string: ");
	gets(nome);
	
	printf("O número de caracteres na string é: %d", strlen(nome));
}

