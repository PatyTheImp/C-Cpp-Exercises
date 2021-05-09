/*
	Name: Exercício 5 alínea 2
	Copyright: 
	Author: Patrícia Costa
	Date: 17/09/20 09:21
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float salario;
	char sexo;
	
	printf("Qual o salário: "); scanf("%f", &salario);
	printf("Qual o sexo: "); scanf(" %c", &sexo);
	
	switch (sexo)
	{
		case 'm':
		case 'M': printf("Imposto: %.2f", salario * .1); break;
		case 'h':
		case 'H': printf("Imposto: %.2f", salario * .15); break;
		default: printf("Sexo incorreto.");
	}
}
