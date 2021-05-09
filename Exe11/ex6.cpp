#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	FILE *fp;
	char nome[50], file[20], file_name[30] = "c:\\c\\";
	
	printf("Insira o seu nome: ");
	gets(nome);
	printf("Insira o nome do ficheiro a criar: ");
	gets(file);
	
	strcat(file_name, file);
	strcat(file_name, ".txt");
	
	fp = fopen(file_name, "w");
	
	fprintf(fp, nome);
	
	fclose(fp);
}

