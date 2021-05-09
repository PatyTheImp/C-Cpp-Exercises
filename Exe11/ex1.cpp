#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	FILE *fp;
	char nome[50];
	
	printf("Insira o seu nome: ");
	gets(nome);
	
	fp = fopen("nome.txt", "w");
	
	fprintf(fp, nome);
	
	fclose(fp);
}

