/*
	Name: Exerc�cio 5 al�nea 7
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
	
	int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;
	char valor;
	
	n0 = 0;
	n1 = 1;
	n2 = 2;
	n3 = 3;
	n4 = 4;
	n5 = 5;
	n6 = 6;
	n7 = 7;
	n8 = 8;
	n9 = 9;
	n10 = 10;
	n11 = 11;
	n12 = 12;
	n13 = 13;
	n14 = 14;
	n15 = 15;
	
	printf("++++ Valores decimais em Hexadecimais ++++\n\n"); 
	printf("Deseja visualizar os valores em [m]in�sculas ou [M]ai�sculas? "); valor = getchar();
	
	switch (valor)
	{
		case 'm': 
			printf("Hex(min�sculas) Decimal\n");
			printf("\t\t%x\t\t%d", n0, n0); break;
		case 'M': printf("Hex(Mai�sculas) Decimal\n"); break;
		default: printf("Erro");
	}
	
}



























