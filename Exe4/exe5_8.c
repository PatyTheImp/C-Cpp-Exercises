/*
	Name: Exerc�cio 5 al�nea 8
	Copyright: 
	Author: Patr�cia Costa
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
	
	printf("Insira inteiro n�mero 1: "); scanf("%d", &num1);
	printf("Insira inteiro n�mero 2: "); scanf("%d", &num2);
	printf("Deseja visualizar os valores em [m]in�sculas ou [M]ai�sculas? "); scanf(" %c", &valor);
	
	switch (valor)
	{
		case 'm': printf("N�mero 1: %x, N�mero 2: %x", num1, num2); break;
		case 'M': printf("N�mero 1: %X, N�mero 2: %X", num1, num2); break;
		default: printf("erro");
	}
}
