/*
	Name: Exercício 5 alínea 3
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
	
	int mes;
	
	printf("Introduza um inteiro correspondente a um mês: "); scanf("%d", &mes);
	
	switch (mes)
	{
		case 1: printf("Janeiro"); break;
		case 2: printf("Fevereiro"); break;
		case 3: printf("Março"); break;
		case 4: printf("Abril"); break;
		case 5: printf("Maio"); break;
		case 6: printf("Junho"); break;
		case 7: printf("Julho"); break;
		case 8: printf("Agosto"); break;
		case 9: printf("Setembro"); break;
		case 10: printf("Outubro"); break;
		case 11: printf("Novembro"); break;
		case 12: printf("Dezembro"); break;
		default: printf("Valor inválido");
	}
}
