#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	typedef struct Individuo
	{
		char nome[60];
		int idade;
		char sexo[20];
		char est_civil[20];
		float salario;
		char sal_mes[20];
	};
	
	Individuo individuo_1 = {"Carlos", 30, "Masculino", "Solteiro", 1000, "Maio"};
	Individuo individuo_2;
	
	printf("Introduza os dados do indiv�duo 2:\n");
	printf("Nome: ");
	scanf("%s", individuo_2.nome);
	printf("Idade: ");
	scanf("%d", &individuo_2.idade);
	printf("Sexo: ");
	scanf("%s", individuo_2.sexo);
	printf("Estado Civil: ");
	scanf("%s", individuo_2.est_civil);
	printf("Sal�rio: ");
	scanf("%f", &individuo_2.salario);
	printf("M�s do Sal�rio: ");
	scanf("%s", individuo_2.sal_mes);
	
	puts("\nINDIV�DUO 1:");
	printf("Nome: %s\nIdade: %d\nSexo: %s\nEstado Civil: %s\nSal�rio: %.2f �\nM�s de Sal�rio: %s\n\n", 
	individuo_1.nome, individuo_1.idade, individuo_1.sexo, individuo_1.est_civil, individuo_1.salario, individuo_1.sal_mes);
	
	puts("INDIV�DUO 2:");
	printf("Nome: %s\nIdade: %d\nSexo: %s\nEstado Civil: %s\nSal�rio: %.2f �\nM�s de Sal�rio: %s\n\n", 
	individuo_2.nome, individuo_2.idade, individuo_2.sexo, individuo_2.est_civil, individuo_2.salario, individuo_2.sal_mes);
}

