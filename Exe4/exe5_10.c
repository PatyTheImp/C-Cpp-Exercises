/*
	Name: Exercício 5 alínea 10
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
	
	int dia;
	
	printf("Introduza um inteiro de 1 a 7: "); scanf("%d", &dia);
	
	switch (dia)
	{
		case 1: printf("Domingo"); break;
		case 2: printf("Segunda-Feira"); break;
		case 3: printf("Terça-Feira"); break;
		case 4: printf("Quarta-Feira"); break;
		case 5: printf("Quinta-Feira"); break;
		case 6: printf("Sexta-Feira"); break;
		case 7: printf("Sábado"); break;
		default: printf("Dia da semana não existente.");
	}
}
