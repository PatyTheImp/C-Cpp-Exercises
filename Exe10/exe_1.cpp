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
	
	printf("Nome: %s\nIdade: %d\nSexo: %s\nEstado Civil: %s\nSalário: %.2f\nMês de Salário: %s", 
	individuo_1.nome, individuo_1.idade, individuo_1.sexo, individuo_1.est_civil, individuo_1.salario, individuo_1.sal_mes);
}

