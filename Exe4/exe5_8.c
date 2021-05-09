/*
	Name: Exercício 5 alínea 8
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
	
	int num1, num2;
	char valor;
	
	printf("Insira inteiro número 1: "); scanf("%d", &num1);
	printf("Insira inteiro número 2: "); scanf("%d", &num2);
	printf("Deseja visualizar os valores em [m]inúsculas ou [M]aiúsculas? "); scanf(" %c", &valor);
	
	switch (valor)
	{
		case 'm': printf("Número 1: %x, Número 2: %x", num1, num2); break;
		case 'M': printf("Número 1: %X, Número 2: %X", num1, num2); break;
		default: printf("erro");
	}
}
