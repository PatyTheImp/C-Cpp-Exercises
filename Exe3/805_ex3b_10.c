/*
	Name: ex3b alínea 10
	Copyright: 
	Author: Patrícia Costa
	Date: 08/09/20 14:36
	Description: 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int dia, mes,ano;
	
	printf("Introduza uma data no formato aaaa-mm-dd: "); scanf("%d-%d-%d", &ano, &mes, &dia);
	
	printf("%d/%d/%d", dia, mes, ano);
}
