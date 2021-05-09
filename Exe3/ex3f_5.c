/*
	Name: Exe 3f alínea 5
	Copyright: 
	Author: Patrícia Costa
	Date: 11/09/20 09:39
	Description: 
*/

#include <locale.h>
#include <stdio.h>

#define desconto .1

main()
{
	setlocale(LC_ALL, "portuguese");
	
	float valor;
	
	printf("Insira o valor do produto: "); scanf("%f", &valor);
	printf("O valor do desconto é: %.2f euros\n", valor * desconto);
	printf("O valor total final é de: %.2f euros", valor - (valor * desconto));
}
