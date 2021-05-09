#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int nr_pessoas;
	FILE *fp;
	char ch;
	
	struct Dados 
	{
		char nome[50];
		int idade;
		char localidade[20];
	};
	
	Dados data[50];
	
	printf("Vai inserir os dados de quantas pessoas? ");
	scanf("%d", &nr_pessoas);
	
	for (int i = 0; i < nr_pessoas; i++)
	{
		printf("Introduza os dados da pessoa nº %d:\n", i + 1);
		fflush(stdin);
		printf("Nome: ");
		gets(data[i].nome);
		printf("Idade: ");
		scanf("%d", &data[i].idade);
		fflush(stdin);
		printf("Localidade: ");
		gets(data[i].localidade);
	}
	
	fp = fopen("c:\\c\\Ex12_4.txt", "w");
	
	for (int i = 0; i < nr_pessoas; i++)
	{
		fprintf(fp, "Dados da pessoa nº %d:\n", i + 1);
		fprintf(fp, "Nome: %s\n", data[i].nome);
		fprintf(fp, "Idade: %d\n", data[i].idade);
		fprintf(fp, "Localidade: %s\n\n", data[i].localidade);
	}
	
	fclose(fp);
	
	fp = fopen("c:\\c\\Ex12_4.txt", "r");
	
	puts("\nConteúdo do ficheiro:\n");
	while ((ch = fgetc(fp)) != EOF)
			printf("%c", ch);
	
	fclose(fp);
}











































