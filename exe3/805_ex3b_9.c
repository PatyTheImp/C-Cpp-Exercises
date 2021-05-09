
/*
	Name: ex3b alínea 9
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
	
	printf("Introduza o dia: "); scanf("%d", &dia);
	printf("Indroduza o mês: "); scanf("%d", &mes);
	printf("Indroduza o ano: "); scanf("%d", &ano);
	
	printf("%d/%d/%d", dia, mes, ano);
}
