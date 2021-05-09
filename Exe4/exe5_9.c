/*
	Name: Exercício 5 alínea 9
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
	
	int dia, mes, ano;
	
	printf("Introduza uma data no formato (dd/mm/aaaa): "); scanf("%d/%d/%d", &dia, &mes, &ano);
	
	if (((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) && (dia > 0 && dia < 31)) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && (dia > 0 && dia < 30)) || (mes == 2 && dia > 0 && dia < 28))
	{
		dia++;
		printf("Data do dia seguinte: %d/%d/%d", dia, mes, ano);
	}
	else if (((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10) && dia == 31) || ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia == 30) || (mes == 2 && dia == 28))
	{
		dia = 1;
		mes++;
		printf("Data do dia seguinte: %d/%d/%d", dia, mes, ano);
	}
	else if (mes == 12 && dia == 31)
	{
		dia = 1;
		mes = 1;
		ano++;
		printf("Data do dia seguinte: %d/%d/%d", dia, mes, ano);
	}
	else printf("Data inválida");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
