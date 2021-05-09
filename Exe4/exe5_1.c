/*
	Name: Exercício 5 alínea 1
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
	char est_civil;
	
	printf("Qual o salário: "); scanf("%f", &salario);
	printf("Qual o estado civil: "); scanf(" %c", &est_civil);
	
	if ( est_civil == 'c' || est_civil == 'C') printf("Imposto: %.2f", salario * .09);
	else if ( est_civil == 's' || est_civil == 'S') printf("Imposto: %.2f", salario * .1);
	else printf("Erro");
}

