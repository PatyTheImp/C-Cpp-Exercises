#include <stdio.h>
#include <locale.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	FILE *fp;
	char nome[50], op[2];
	
	printf("Insira o seu nome: ");
	gets(nome);
	printf("Deseja acrecentar[a] ou criar [w] um novo ficheiro?");
	gets(op);
	
	fp = fopen("nome.txt", op);
	
	fprintf(fp, nome);
	
	fclose(fp);
}
