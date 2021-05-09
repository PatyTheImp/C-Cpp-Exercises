#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char nome_introduzido[100], nome_valido[5] = "Paty";
	
	printf("Introduza o seu primeiro nome: "); 
	gets(nome_introduzido);
	
	if (strcmp(nome_introduzido, nome_valido))
		printf("O nome não é válido!!!");
	else
		printf("Olá %s", nome_valido);
}

