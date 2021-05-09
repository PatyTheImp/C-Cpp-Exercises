#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	char primeiro_nome[100], segundo_nome[100], ultimo_nome[100], nome_completo[100];
	
	printf("Insira o seu primeiro nome: "); gets(primeiro_nome);
	printf("Insira o seu segundo nome: "); gets(segundo_nome);
	printf("Insira o seu ultimo nome: "); gets(ultimo_nome);
	
	printf("\nO seu nome é: %s\n\n", strcat(strcat(strcat(strcat(strcat(nome_completo, primeiro_nome), " "), segundo_nome), " "), ultimo_nome));
	printf("O seu nome ao contrário é: %s %s %s", ultimo_nome, segundo_nome, primeiro_nome);
}

