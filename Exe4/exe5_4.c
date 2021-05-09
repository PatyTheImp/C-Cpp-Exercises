/*
	Name: Exercício 5 alínea 4
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
	
	int unidades, total = 100;
	
	printf("Existem 100 unidade de monitores em stock.\n");
	printf("Quantos monitores deseja levar? "); scanf("%d", &unidades);
	
	total -= unidades;
	
	printf("Existem %d monitores em stock.\n", total);
	total >= 50 ? printf("Não há necessidade de encomendar mais monitores.") : printf("Há necessidade de encomendar mais monitores.");
}
