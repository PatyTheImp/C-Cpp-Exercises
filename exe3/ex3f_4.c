/*
	Name: Exe 3f al�nea 4
	Copyright: 
	Author: Patr�cia Costa
	Date: 11/09/20 09:39
	Description: 
*/

#include <locale.h>
#include <stdio.h>

#define IVA .23

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float valor;
	
	printf("Insira o valor do produto: "); scanf("%f", &valor);
	printf("O valor do imposto a ser pago �: %.2f euros", valor * IVA);
}
