/*
	Name: Exe 3f alínea 4
	Copyright: 
	Author: Patrícia Costa
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
	printf("O valor do imposto a ser pago é: %.2f euros", valor * IVA);
}
